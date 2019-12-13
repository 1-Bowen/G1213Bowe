// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "TimerManager.h"
#include "Particles/ParticleSystem.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "Components/BoxComponent.h"
#include "BlackHole.generated.h"

UCLASS()
class G1213BOWEN_API ABlackHole : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlackHole();

	UPROPERTY(VisibleAnywhere)
		UBoxComponent* CollisionBox;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* BaseMesh;

	UPROPERTY(EditAnywhere)
		float Distance;

	UPROPERTY(EditAnywhere)
		float Damage = 0.3;

	UPROPERTY(EditAnywhere)
		float Time;

	UPROPERTY(VisibleAnywhere)
		float Seconds = Time;

	UPROPERTY(EditAnywhere)
		ACharacter* Player;

	UPROPERTY(EditAnywhere)
		UParticleSystem* Explosion;

private:
	UMaterialInstanceDynamic* BlackHoleMaterial;
	float Red = 0;
	bool IsInRadius = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
