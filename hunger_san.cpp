// Fill out your copyright notice in the Description page of Project Settings.


#include "hunger_san.h"

// Sets default values
Ahunger_san::Ahunger_san()
{

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	hunger = 100;
	sanity = 100;
	UWorld* world = GetWorld();
}

void Ahunger_san::decrement(bool is_over)
{
	hunger -= -5;
	
}

// Called when the game starts or when spawned
void Ahunger_san::BeginPlay()
{
	Super::BeginPlay();	
	
}

// Called every frame
void Ahunger_san::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

