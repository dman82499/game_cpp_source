// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "soldier_in.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AISHOOTING_API Usoldier_in : public UActorComponent
{
	GENERATED_BODY()

	public:	
// Sets default values for this component's properties
	Usoldier_in();
	//UPROPERTY(BlueprintReadWrite, Category = "Your custom category")
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "is_aler")	
		bool can_see_pla;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "is_aler")
		int you;
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	
	
	UFUNCTION(BlueprintCallable)
	void update_can_see(bool tru);

	protected:
	// Called when the game starts
	virtual void BeginPlay() override;

};
