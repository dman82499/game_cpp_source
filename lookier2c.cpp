// Fill out your copyright notice in the Description page of Project Settings.


#include "lookier2c.h"
#include "GameFramework/Actor.h"

float l = 100000;
// Sets default values
Alookier2c::Alookier2c()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	x_kick = 0;

	

}

// Called when the game starts or when spawned
void Alookier2c::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Alookier2c::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector locat = this->GetActorLocation();
	float x2 = locat.X;
	x2 *= l;
	locat = FVector(locat.X + x2, locat.Y+x2, locat.Z);
	this->SetActorLocation(locat);

}

// Called to bind functionality to input
void Alookier2c::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void Alookier2c::set_motion(float c)
{
	x_kick = c;
}


