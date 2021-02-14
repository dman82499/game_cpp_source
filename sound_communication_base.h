// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "sound_communication_base.generated.h"

UCLASS()
class AISHOOTING_API Asound_communication_base : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Asound_communication_base();

	UPROPERTY()
		UAudioComponent* song;

	UPROPERTY(EditAnywhere, Instanced)
		TArray<USoundBase*> music;
	
	UPROPERTY()
		bool is_currently_playing;

		struct music_base {
			USoundBase* the_base;
			bool has_been_pla;
		};
		
	//TArray<music_base> lgo;
		
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void send_msg(int i);
	UFUNCTION()
	void end_sound();

private:
	UFUNCTION()
	void play_sound(USoundBase* play);



};
