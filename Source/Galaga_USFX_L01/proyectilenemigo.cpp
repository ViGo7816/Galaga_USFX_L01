// Fill out your copyright notice in the Description page of Project Settings.


#include "proyectilenemigo.h"

// Sets default values
Aproyectilenemigo::Aproyectilenemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProyectilMaya = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProyectilMaya"));
	RootComponent = ProyectilMaya;

	ProyectilSpeed = 1000.0f;
}

// Called when the game starts or when spawned
void Aproyectilenemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aproyectilenemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation() - FVector(0, 0, ProyectilSpeed * DeltaTime);
	SetActorLocation(NewLocation, true);
}

