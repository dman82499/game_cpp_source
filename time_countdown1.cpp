// Fill out your copyright notice in the Description page of Project Settings.


#include "time_countdown1.h"
#include "Engine/World.h"
#include "UObject/Class.h"
#include "soldier_in.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
Atime_countdown1::Atime_countdown1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void Atime_countdown1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Atime_countdown1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Atime_countdown1::call_timer(UClass* base_soldier_ref)
{
    soldier_base = base_soldier_ref;
    //void (*idk)(UClass* base){ &Atime_countdown1::check_sigh };
    GetWorldTimerManager().SetTimer(coutimer, this, &Atime_countdown1::check_sigh, 0.5f, true);
    for (int x = 0; x < 10; x++) {
        //set more timers
    }
}

void Atime_countdown1::check_sigh() {
    Usoldier_in* soldie = nullptr;
    UWorld* myWorld = GetWorld();
    UClass* better_harmon = Usoldier_in::StaticClass();
    TArray<AActor*> moms;
    AActor* what_even = nullptr;
    UActorComponent* what_even2 = nullptr;
    UGameplayStatics::GetAllActorsOfClass(myWorld, soldier_base, moms);

    int num_of_sights = 0;
    FString char_ms;
    for (int x = 0; x < moms.Num(); x++) {
        char_ms = "Soldier number";
        char_ms.AppendInt(x);
        what_even = moms.Pop();
        what_even2 = what_even->GetComponentByClass(better_harmon);
        //before we can get this function to work we need to figure out how to get the operation below to work
        soldie = dynamic_cast<Usoldier_in*>(what_even2);
        if (soldie == NULL) {
            GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Orange, FString("Cast Failed"));
        }
        else {
            if (soldie->can_see_pla) {
                char_ms.Append("can see player");
                num_of_sights++;
            }
            else if (soldie->can_see_pla == false) {
                char_ms.Append("can not see player");
                //soldie->can_see_pla = true;

            }
            char_ms.Append("and number increment is: ");
            char_ms.AppendInt(soldie->you);
            GEngine->AddOnScreenDebugMessage(-1, 4.0, FColor::Orange, char_ms);
        }
        //GEngine->AddOnScreenDebugMessage()
    }
    //add code to loop through all the actors and check if our person is out of sight
}


void Atime_countdown1::updatecan_see2(AActor * soldier_r, bool tru)
    {
        Usoldier_in* slk;
        UClass* my_mom = Usoldier_in::StaticClass();
        UActorComponent* s1 = soldier_r->GetComponentByClass(my_mom);
        slk = dynamic_cast<Usoldier_in*>(s1);
        if (slk == NULL) {
            GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Orange, "cast failed");
        }
        else {
            slk->can_see_pla = tru;
            slk->you -= 5;
            FString lkh = "setting value of soldier to: ";
            if (slk) {
                lkh.Append("true");
            }

            GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Blue, lkh);
        }
    }


