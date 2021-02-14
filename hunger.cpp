// Fill out your copyright notice in the Description page of Project Settings.
#include "hunger.h"
#include "Kismet/GameplayStatics.h"
#include "hallucination_gen2.h"


// Sets default values for this component's properties
Uhunger::Uhunger()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	hunger_bool = false;
	// ...
	hunger = 100;
	in_hallucin = false;
}


// Called when the game starts
void Uhunger::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void Uhunger::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void Uhunger::increment_hunger() {
	hunger -= 5;
	FString hunger2 = "hunger";
	hunger2.AppendInt(hunger);

	GEngine->AddOnScreenDebugMessage(-1, 4.0, FColor::Orange, hunger2);
	if (hunger < 30) {
		UWorld* wor = GEngine->GetWorld();
		FActorSpawnParameters t;
		FVector i = FVector(0);
		UClass* lh = Ahallucination_gen2::StaticClass();
		FRotator m = FRotator(0);  //, & 
		wor->SpawnActor(lh, &i, &m, t);
	}
}


void Uhunger::flip_flop_hunger() {
	hunger_bool = !hunger_bool;
	
}