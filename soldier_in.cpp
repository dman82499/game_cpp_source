// Fill out your copyright notice in the Description page of Project Settings.


#include "soldier_in.h"

// Sets default values for this component's properties
Usoldier_in::Usoldier_in()
{
	can_see_pla = false;
	you = 100;
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	
	// ...
}


// Called when the game starts
//might not need to call this actually, it could screw things up
void Usoldier_in::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void Usoldier_in::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void Usoldier_in::update_can_see(bool tru)
{
	can_see_pla = tru;
	you -= 5;
}

