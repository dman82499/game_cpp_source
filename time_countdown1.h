// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "time_countdown1.generated.h"

UCLASS()
class AISHOOTING_API Atime_countdown1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Atime_countdown1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//there is no class parameter here because we will just use a data object that will be a c++ object
	UFUNCTION(BlueprintCallable)
	void call_timer(UClass* base_soldier_ref);

	void check_sigh();

	FTimerHandle coutimer;

	UClass* soldier_base;
	
	UFUNCTION(BlueprintCallable)
		void updatecan_see2(AActor* soldier_r, bool tru);
};
