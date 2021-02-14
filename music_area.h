// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "stiddoland1.generated.h"


UCLASS()
class AISHOOTING_API Astiddoland1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Astiddoland1();

	UPROPERTY(EditAnywhere)
		UBoxComponent* area;

	UPROPERTY(EDITANYWHERE)
		USoundBase* music;

	UPROPERTY(EDITANYWHERE)
		UAudioComponent* musicthe_second;

	//UFUNCTION()
		//void play_sound(AActor* other_actor, UPrimitiveComponent* ot, int32 ind, bool b_sweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable)
		void stop_music();

	UFUNCTION(BlueprintCallable)
		void start();

	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
