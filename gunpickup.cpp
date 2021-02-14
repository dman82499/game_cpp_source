// Fill out your copyright notice in the Description page of Project Settings.


#include "gunpickup.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h"


//figure out include file for third person character

// Sets default values
Agunpickup::Agunpickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	dick = CreateDefaultSubobject<UStaticMeshComponent>(FName("dickmeshcomp"));
	dick_setup = CreateDefaultSubobject<USceneComponent>(FName("pickup_rt"));
	RootComponent = dick_setup;
	//dick->(dick_setup, FAttachmentTransformRules::SnapToTargetNotIncludingScale); Need to call SetupAttachment instead of attachToComponent
	//this shouldn't work, but it does...oh well!
	my_hard_dick = CreateDefaultSubobject<UBoxComponent>(FName("Ilovedicks"));
	my_hard_dick->SetGenerateOverlapEvents(true);
	//my_hard_dick->OnComponentBeginOverlap.AddDynamic(this, &Agunpickup::itempickup);
	//my_hard_dick->AttachToComponent(dick_setup, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	//world = AActor::GetWorld();



}
// Called when the game starts or when spawned
void Agunpickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Agunpickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int Agunpickup::itempickup(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSwap, const FHitResult& SweepResult)
{
	FString item_mesh_id;
	int cmp = this->item_var;
	Destroy();
	return cmp;
}

bool Agunpickup::is_pt()
{
	return isApt;
}

void Agunpickup::increment_pts_found()
{
	/*ACharacter* mom = UGameplayStatics::GetPlayerCharacter(world, 0);
	if (isApt) {
		AThirdPersonCharacter mom2 = (ThirdPersonCharacter)mom;

	}
	*/
}

