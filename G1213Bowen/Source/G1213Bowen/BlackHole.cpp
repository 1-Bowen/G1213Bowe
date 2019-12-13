// Fill out your copyright notice in the Description page of Project Settings.


#include "BlackHole.h"
#include "G1213BowenCharacter.h"
#include "Engine.h"

// Sets default values
ABlackHole::ABlackHole()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Distance = 300;
	Time = 5;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	RootComponent = BaseMesh;
}

// Called when the game starts or when spawned
void ABlackHole::BeginPlay()
{
	Super::BeginPlay();
	BlackHoleMaterial = BaseMesh->CreateDynamicMaterialInstance(0);
}

// Called every frame
void ABlackHole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

void ABlackHole::CountDown()
{
	if (this->GetActorLocation().Distance(this->GetActorLocation(), Player->GetActorLocation()) <=Distance)
	{
		Red = 1; 
		IsInRadius = true;
		FTimerHandle TimeHandle;
		GetWorld()->GetTimerManager().SetTimer(TimeHandle, this, &ABlackHole::Boom, Time, true);
		GEngine->AddOnScreenDebugMessage(1, 5, FColor::Red, TEXT("START count down"));

	}
	else
	{
		IsInRadius = false;

	}

}

void ABlackHole::Boom()
{
	auto player = Cast<AG1213BowenCharacter>(Player);
	if (player != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(1, 5, FColor::Emerald, TEXT("BOOM"));
		Seconds--;
		if (Seconds < 0)
		{
			if (IsInRadius)
			{
				player->GetCharacterMovement()->AddImpulse(player->GetActorForwardVector() * 250000);
			}
			//particle systems to popup;
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion, GetTransform());
			Destroy();
		}
		//Player->Hp -= Damage;
	}
}

void ABlackHole::UpdateMaterial()
{
	BlackHoleMaterial->SetScalarParameterValue(TEXT("Red"), Red);
}




