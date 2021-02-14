// Fill out your copyright notice in the Description page of Project Settings.
#include "hallucination_gen2.h"
#include "GameFramework/Character.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"



// Sets default values
Ahallucination_gen2::Ahallucination_gen2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mh1 = CreateDefaultSubobject<UStaticMesh>(FName("shape1"));
	mh2 = CreateDefaultSubobject<UStaticMesh>(FName("shape2"));
	TArray<UStaticMesh*> help_me;
	registered_mesh1 = nullptr;
	gen_hallucins1 = false;
}

// Called when the game starts or when spawned
void Ahallucination_gen2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Ahallucination_gen2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Ahallucination_gen2::gen_hallucins()
{
	if (!gen_hallucins1) {
		GetWorldTimerManager().SetTimer(th_mp, this, &Ahallucination_gen2::gen_the_hallucinations, 4.0f, true);
		gen_hallucins1 = true;
	}
}

void Ahallucination_gen2::gen_the_hallucinations()
{
	if (registered_mesh1 == NULL) {
		//this doesn't generate the correct number yet
		UWorld* wor = GEngine->GetWorld();
		ACharacter* ourchar = UGameplayStatics::GetPlayerCharacter(this, 0);
		FVector pos1 = ourchar->GetActorLocation();
		uint8 pos = (uint8)FMath::Rand();
		UClass* th1 = mh1->StaticClass();
		FActorSpawnParameters t;
		//t.SpawnCollisionHandlingOverride = bNoCollisionFail ? ESpawnActorCollisionHandlingMethod::AlwaysSpawn : ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
		//some code here to generate location
		FVector locat1 = FMath::VRand();
		locat1 *= 4;
		pos1 += locat1;

		FRotator rnd_rot = FRotator(FMath::RandRange(0, 90), FMath::RandRange(0, 90), FMath::RandRange(0, 90));

		registered_mesh1 = wor->SpawnActor(th1, &locat1, &rnd_rot, t);
	}
	else {
		registered_mesh1->Destroy();
	}

}

