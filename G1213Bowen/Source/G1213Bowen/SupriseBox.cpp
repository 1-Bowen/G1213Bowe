// Fill out your copyright notice in the Description page of Project Settings.


#include "SupriseBox.h"
#include "Engine.h"

// Sets default values
ASupriseBox::ASupriseBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASupriseBox::BeginPlay()
{
	Super::BeginPlay();

	if (Player != nullptr)
	{
		Player->InputComponent->BindAction("Loot", IE_Pressed, this, &ASupriseBox::Surprise);
	}
	
}

// Called every frame
void ASupriseBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASupriseBox::Surprise()
{
	FMath Random;
	float temp = Random.FRandRange(0, 1);
	if (temp >= common) 
	{
		GEngine->AddOnScreenDebugMessage(1, 5, FColor::Green, TEXT("YOU Gain +1 Level"));
		Surprise();
		Player->Level++;
	}
		
	if (temp < common && temp > rare)
	{
		GEngine->AddOnScreenDebugMessage(1, 5, FColor::Green, TEXT("YOU Lost -1 Level"));
		Player->Level--;
		Surprise();
	}
	
	if (temp <= epic)
	{
		GEngine->AddOnScreenDebugMessage(1, 5, FColor::Green, TEXT("YOU Open Nothing"));
	}
		

}