// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PowerUp.generated.h"

UENUM(BlueprintType)
enum class EPowerUpType : uint8
{
    Rapidez,
    SuperAtaque,
};

UCLASS()
class GALAGA_USFX_L01_API APowerUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APowerUp();
	 void AplicarPowerUp();
protected:
    // Tipo de PowerUp
    UPROPERTY(EditAnywhere)
    EPowerUpType PowerUpType;

    // Duración del PowerUp
    UPROPERTY(EditAnywhere)
    float Duration;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
