// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/InputComponent.h"
#include "G1213BowenCharacter.h"
#include "SupriseBox.generated.h"

UCLASS()
class G1213BOWEN_API ASupriseBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASupriseBox();

	const float common = 0.5;
	const float rare = 0.3;
	const float epic = 0.2;

	UPROPERTY(EditAnywhere)
		AG1213BowenCharacter* Player;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Surprise();
};
