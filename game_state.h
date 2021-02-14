// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "game_state.generated.h"

/**
 * 
 */
UCLASS()
class AISHOOTING_API Agame_state : public AGameStateBase
{
	GENERATED_BODY()

		Agame_state();



		//EditAnywhere, BlueprintReadWrite, Category = "part_num"
	UPROPERTY(EditAnywhere, Replicated)
		int pts_foun1 = 0;


	UPROPERTY(EditAnywhere)
		int num_of_persuit;

	UFUNCTION(BlueprintCallable)
		void pt_up_fon1();

	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;
	
};
