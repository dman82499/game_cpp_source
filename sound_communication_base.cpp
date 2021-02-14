// Fill out your copyright notice in the Description page of Project Settings.


#include "sound_communication_base.h"
#include "Components/AudioComponent.h"
// Sets default values
Asound_communication_base::Asound_communication_base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	USoundBase* lol = CreateDefaultSubobject<USoundBase>(FName("sounds"));
	song = CreateDefaultSubobject<UAudioComponent>(FName("the_tune"));
	//music.Append(lol);
	is_currently_playing = false;
}

// Called when the game starts or when spawned
void Asound_communication_base::BeginPlay()
{
	
	Super::BeginPlay();
	song->OnAudioFinished.AddDynamic(this, &Asound_communication_base::end_sound);
	for (int x = 0; x < music.Num(); x++) {
		music_base you;
		you.has_been_pla = false;
		//music.Find(you.the_base, x);
		//lgo.Push(you);
		
	}
	
}

// Called every frame
void Asound_communication_base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Asound_communication_base::send_msg(int i)
{
	/*music_base th_record;
	if (lgo.Find(th_record, i)) {
		if (!th_record.has_been_pla) {
			if (!is_currently_playing) {
				//modify array element to become false
				is_currently_playing = true;
				USoundBase* music2 = th_record.the_base;
				Asound_communication_base::play_sound(music2);

			}
		}
	}*/
}

void Asound_communication_base::end_sound()
{
	is_currently_playing = false;
}

void Asound_communication_base::play_sound(USoundBase* recording)
{
}

