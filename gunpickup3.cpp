// Fill out your copyright notice in the Description page of Project Settings.


#include "gunpickup3.h"
#include "Components/BoxComponent.h"
// Sets default values
Agunpickup3::Agunpickup3()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	dick = CreateDefaultSubobject<USkeletalMeshComponent>(FName("dick"));
	//this shouldn't work, but it does...oh well!
	my_hard_dick = CreateDefaultSubobject<UBoxComponent>(FName("Ilovedicks"));



}



// Called when the game starts or when spawned
void Agunpickup3::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void Agunpickup3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int Agunpickup3::itempickup(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSwap, const FHitResult& SweepResult)
{
	FString item_mesh_id;
	int cmp = this->item_var;
	dick->GetMeshId(item_mesh_id);
	Destroy();
	return cmp;
}