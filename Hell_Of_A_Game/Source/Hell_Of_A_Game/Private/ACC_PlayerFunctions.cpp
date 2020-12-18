// Fill out your copyright notice in the Description page of Project Settings.


#include "ACC_PlayerFunctions.h"

// Sets default values for this component's properties
UACC_PlayerFunctions::UACC_PlayerFunctions()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UACC_PlayerFunctions::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UACC_PlayerFunctions::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

FVector UACC_PlayerFunctions::GetShotStart(USceneComponent* ShotOrigin)
{
	return ShotOrigin->GetComponentLocation();
}

FVector UACC_PlayerFunctions::GetShotEnd(USceneComponent* ShotOrigin)
{
	FVector temp_01 = ShotOrigin->GetComponentLocation();
	FRotator temp_02 = ShotOrigin->GetComponentRotation();

	FVector temp_03 = temp_01 + temp_02.Vector() * 10000.f;

	return temp_03;
}

bool UACC_PlayerFunctions::LockedShoot(USceneComponent* ShotOrigin, AActor* TargetEnemy, AActor*& returnedHit)
{
	FVector ShotStart = GetShotStart(ShotOrigin);
	FVector ShotEnd = TargetEnemy->GetActorLocation();

	FHitResult outHit;
	FCollisionQueryParams collisionParams;

	DrawDebugLine(GetWorld(), ShotStart, ShotEnd, FColor::Blue, false, 2.f, 0, 1.f);

	if (GetWorld()->LineTraceSingleByChannel(outHit, ShotStart, ShotEnd, ECC_Visibility, collisionParams))	//Perform linetrace
	{
		if (outHit.bBlockingHit)	//If something is hit
		{
			returnedHit = outHit.GetActor();
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, FString::Printf(TEXT("Linetrace has hit: %s"), *outHit.GetActor()->GetName()));
				return true;
			}
		}
	}

	return false;
}

bool UACC_PlayerFunctions::UnlockedShoot(USceneComponent* ShotOrigin, AActor*& returnedHit)
{
	FVector ShotStart = GetShotStart(ShotOrigin);
	FVector ShotEnd = GetShotEnd(ShotOrigin);

	FHitResult outHit;
	FCollisionQueryParams collisionParams;

	DrawDebugLine(GetWorld(), ShotStart, ShotEnd, FColor::Red, false, 2.f, 0, 1.f);

	if (GetWorld()->LineTraceSingleByChannel(outHit, ShotStart, ShotEnd, ECC_Visibility, collisionParams))	//Perform linetrace
	{
		if (outHit.bBlockingHit)	//If something is hit
		{
			returnedHit = outHit.GetActor();
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, FString::Printf(TEXT("Linetrace has hit: %s"), *outHit.GetActor()->GetName()));
				return true;
			}
		}
	}

	return false;
}

bool UACC_PlayerFunctions::Melee(USceneComponent* MeleeOrigin, float MeleeRange, TArray<AActor*>& HitEnemies)
{
	TArray<TEnumAsByte<EObjectTypeQuery>> objectTypes;
	objectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_PhysicsBody));
	objectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldDynamic));
	TArray<AActor*> actorsToIgnore;
	actorsToIgnore.Add(GetOwner());

	UKismetSystemLibrary::SphereOverlapActors(GetWorld(), MeleeOrigin->GetComponentLocation(), MeleeRange, objectTypes, nullptr, actorsToIgnore, HitEnemies);

	return false;
}

FRotator UACC_PlayerFunctions::GetNewRotation(FRotator ControlRotation, USceneComponent* Camera, AActor* TargetEnemy)
{
	FVector CameraLocation = Camera->GetComponentLocation();
	FVector TargetLocation = TargetEnemy->GetActorLocation();

	FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(CameraLocation, TargetLocation);
	float DeltaSec = GetWorld()->GetDeltaSeconds();

	FRotator InterpValue = FMath::RInterpTo(ControlRotation, LookAtRotation, DeltaSec, 7.f);

	FRotator NewValue = UKismetMathLibrary::MakeRotator(ControlRotation.Roll, ControlRotation.Pitch, InterpValue.Yaw);

	return NewValue;
}
