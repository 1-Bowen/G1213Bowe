// Fill out your copyright notice in the Description page of Project Settings.


#include "Candy.h"
#include "Engine.h"
#include "G1213BowenCharacter.h"
#include "Materials/MaterialInstanceDynamic.h"

// Sets default values
ACandy::ACandy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	CollisionBox->AttachTo(BaseMesh);
	RootComponent = BaseMesh;

}

// Called when the game starts or when spawned
void ACandy::BeginPlay()
{
	Super::BeginPlay();
	
	Rotation.Add(0, 0, 1);
}

// Called every frame
void ACandy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	BaseMesh->AddLocalRotation(Rotation);

}

void ACandy::Heal()
{
	auto player = Cast<AG1213BowenCharacter>(Player);
	player->Level += Healup;

}

void ACandy::NotifyActerBeginOverlap(AActor* OtherActor)
{
	if (Cast<AG1213BowenCharacter>(OtherActor) != nullptr)
	{
		auto player = Cast<AG1213BowenCharacter>(OtherActor);
		if (player != nullptr)
		{
			if (HealSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, HealSound, GetActorLocation());
			}
		}
	}
}
