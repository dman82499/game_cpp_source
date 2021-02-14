// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "gunpickup.generated.h"


UCLASS()
class AISHOOTING_API Agunpickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	
	Agunpickup();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* dick;

	UPROPERTY(EditAnywhere)
	bool isApt;

	
	UPROPERTY(EditAnywhere)
	UBoxComponent* my_hard_dick;

	UPROPERTY(EditAnywhere)
	USceneComponent* dick_setup;

	UPROPERTY(EditAnywhere)
	int item_var;
	// Called when the game starts or when spawned;

	UWorld* world;

	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		int itempickup(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSwap, const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable)
		bool is_pt();

	UFUNCTION(BlueprintCallable)
		void increment_pts_found();

};
