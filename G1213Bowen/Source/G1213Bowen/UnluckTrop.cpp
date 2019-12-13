// Fill out your copyright notice in the Description page of Project Settings.


#include "UnluckTrop.h"
#include "Engine.h"
#include "G1213BowenCharacter.h"
#include "Materials/MaterialInstanceDynamic.h"

// Sets default values
AUnluckTrop::AUnluckTrop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));

	CollisionBox->SetSimulatePhysics(true);
	RootComponent = BaseMesh;


}

// Called when the game starts or when spawned
void AUnluckTrop::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUnluckTrop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AUnluckTrop::NotifyActorBeginOverlap(AActor* OtherActor)
{
	if (Cast<AG1213BowenCharacter>(OtherActor) != nullptr)
	{
		auto player = Cast<AG1213BowenCharacter>(OtherActor);
		if(player != nullptr)
		{
			player->Level -= Damage;
			Destroy();
		}
	}
}
