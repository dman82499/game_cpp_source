// Fill out your copyright notice in the Description page of Project Settings.


#include "stiddoland1.h"
#include "kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"

// Sets default values
Astiddoland1::Astiddoland1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	area = CreateDefaultSubobject<UBoxComponent>(FName("what's up"));
	music = CreateDefaultSubobject<USoundBase>(FName("song"));
	musicthe_second = CreateDefaultSubobject<UAudioComponent>(FName("don't touch me"));

}

// Called when the game starts or when spawned
void Astiddoland1::BeginPlay()
{
	Super::BeginPlay();
	area->OnComponentBeginOverlap.AddDynamic(this, &Astiddoland1::OnOverlapBegin);
	//still need to do end overlap
	//musicthe_second = UGameplayStatics::SpawnSound2D(this, music);
	musicthe_second->SetSound(music);
}

// Called every frame
void Astiddoland1::Tick(float DeltaTime)
{ 
	Super::Tick(DeltaTime);

}


void Astiddoland1::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	musicthe_second->FadeIn(8.0);
}


void Astiddoland1::stop_music() {
	musicthe_second->Stop();
	musicthe_second->SetActive(false);
}

void Astiddoland1::start() {
	musicthe_second->SetActive(true);
	musicthe_second->Play();

}

void Astiddoland1::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}
