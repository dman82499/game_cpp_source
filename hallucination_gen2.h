// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "hallucination_gen2.generated.h"

UCLASS()
class AISHOOTING_API Ahallucination_gen2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Ahallucination_gen2();

	UPROPERTY(EditAnywhere)
		UStaticMesh* mh1;

	UPROPERTY(EditAnywhere)
		UStaticMesh* mh2;

private:
	AActor* registered_mesh1;
	AActor* registered_mesh2;
	FTimerHandle th_mp;
	bool gen_hallucins1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void gen_hallucins();

	UFUNCTION(BlueprintCallable)
	void gen_the_hallucinations();

};
