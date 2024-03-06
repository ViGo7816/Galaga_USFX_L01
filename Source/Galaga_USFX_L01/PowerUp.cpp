// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUp.h"
#include "Galaga_USFX_L01Pawn.h"
// Sets default values
APowerUp::APowerUp()
{
	 Duration = 10.0f;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APowerUp::AplicarPowerUp()
{
    // Aquí se aplica el efecto del power
    AGalaga_USFX_L01Pawn* Galaga_USFX_L01Pawn = /* Obtén una referencia al jugador */;
    if (Galaga_USFX_L01Pawn)
    {
        switch (PowerUpType)
        {
        case EPowerUpType::SpeedUp:
            
            Galaga_USFX_L01Pawn->IncreaseFireRate();
            break;
        case EPowerUpType::SuperAttack:
            
            Galaga_USFX_L01Pawn->ActivateSuperAttack();
            break;
        }
    }
}
// Called when the game starts or when spawned
void APowerUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APowerUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

