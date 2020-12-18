// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

#include "ACC_PlayerFunctions.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HELL_OF_A_GAME_API UACC_PlayerFunctions : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UACC_PlayerFunctions();

	UFUNCTION(BlueprintCallable, Category = "PlayerCombat")
		FVector GetShotStart(USceneComponent* ShotOrigin);

	UFUNCTION(BlueprintCallable, Category = "PlayerCombat")
		FVector GetShotEnd(USceneComponent* ShotOrigin);

	UFUNCTION(BlueprintCallable, Category = "PlayerCombat")
		bool LockedShoot(USceneComponent* ShotOrigin, AActor* TargetEnemy, AActor*& returnedHit);
	
	UFUNCTION(BlueprintCallable, Category = "PlayerCombat")
		bool UnlockedShoot(USceneComponent* ShotOrigin, AActor*& returnedHit);

	UFUNCTION(BlueprintCallable, Category = "PlayerCombat")
		bool Melee(USceneComponent* MeleeOrigin, float MeleeRange, TArray<AActor*>& HitEnemies);

	UFUNCTION(BlueprintCallable, Category = "PlayerComat")
		FRotator GetNewRotation(FRotator ControlRotation, USceneComponent* Camera, AActor* TargetEnemy);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
