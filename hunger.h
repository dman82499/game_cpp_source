// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "hunger.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AISHOOTING_API Uhunger : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	Uhunger();

	UPROPERTY(EditAnywhere)
		int hunger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool hunger_bool;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void increment_hunger();

	UFUNCTION(BlueprintCallable)
		void flip_flop_hunger();
private:
	bool in_hallucin;

		
};
