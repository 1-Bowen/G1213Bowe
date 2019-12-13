// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Math/Rotator.h"
#include "Candy.generated.h"

UCLASS()
class G1213BOWEN_API ACandy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACandy();

	UPROPERTY(EditAnywhere)
		float Healup = 0.3;

	UPROPERTY(VisibleAnywhere)
		FRotator Rotation;

	UPROPERTY(VisibleAnywhere)
		AActor* Player;

	UPROPERTY(VisibleAnywhere)
		UBoxComponent* CollisionBox;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* BaseMesh;

	UPROPERTY(EditAnywhere)
		class USoundBase* HealSound;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Heal();
	virtual void NotifyActerBeginOverlap(AActor* OtherActor);
};
