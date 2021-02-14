// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AIController.h"
#include "static_functions.generated.h"



/**
 * 
 */
UCLASS()
class AISHOOTING_API Ustatic_functions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	


	UFUNCTION(BlueprintCallable)
		static bool is_pt_ready(int x);

	UFUNCTION(BlueprintCallable)
		static void enter_heli(APlayerController* acess_world, AActor* helii);

	UFUNCTION(BlueprintCallable)
		static int veiwswat(bool isg, FVector curr_veiw, int pos);

	
	UFUNCTION(BlueprintCallable)
		static AActor* spawn_hallucin(TArray<AActor*> obj, APlayerController* m, APawn* yoiu);
	//TArray<AActor>* obj

	UFUNCTION(BlueprintCallable)
		static void gen_hel_locate(FVector &location, FVector &dest);

	UFUNCTION(BlueprintCallable)
		static AActor* locate_player(TArray<AActor*> help);

	UFUNCTION(BlueprintCallable)
		static AActor* find_closestplaya(TArray<AActor*> help2, AActor* soildier, float& location, bool less_debug);
		//we aren't going to call server has authority here and call in bps to make sure that we can use print statements to inspect

	UFUNCTION(BlueprintCallable)
		static FVector generate_solider_helper(APawn* player);
		//for now we are just useing our pawns, even though we should use all the pawns

	
	
};
