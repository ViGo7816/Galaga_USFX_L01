// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "proyectilenemigo.generated.h"

UCLASS()
class GALAGA_USFX_L01_API Aproyectilenemigo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aproyectilenemigo();
	
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(EditAnywhere)
	UStaticMayaComponent* ProyectilMaya;

	UPROPERTY(EditAnywhere)
	float ProyectilSpeed;

};
