// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "gunpickup3.generated.h"


UCLASS()
class AISHOOTING_API Agunpickup3 : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	Agunpickup3();

	UPROPERTY(EditAnywhere)
		USkeletalMeshComponent* dick;


	UPROPERTY(EditAnywhere)
		UBoxComponent* my_hard_dick;

	UPROPERTY(EditAnywhere)
		USceneComponent* dee_setup;

	UPROPERTY(EditAnywhere)
		int item_var;
	// Called when the game starts or when spawned;
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		int itempickup(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSwap, const FHitResult& SweepResult);

};
