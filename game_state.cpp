// Fill out your copyright notice in the Description page of Project Settings.


#include "game_state.h"

Agame_state::Agame_state() {
	bReplicates = true;
}

void Agame_state::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const { 
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void Agame_state::pt_up_fon1() {
	pts_foun1++;

}


