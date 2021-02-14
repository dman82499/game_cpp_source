// Fill out your copyright notice in the Description page of Project Settings.


#include "static_functions.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Math/UnrealMathUtility.h"
#include "GameFramework/Actor.h"
#include "soldier_in.h"
#include "Math/Vector.h"
#include "string.h"



bool Ustatic_functions::is_pt_ready(int x)
{
    
    bool help;
    if (x > 1) {
        
     
        help = true;
        
    }
    else {
        help = false;
    }
    return help;
}

void Ustatic_functions::enter_heli(APlayerController* world_ref, AActor* helii) {
    UWorld* world;
    int32 index = 0;
    APlayerController* player2 = world_ref;
    world = player2->GetWorld();
    ACharacter* player = UGameplayStatics::GetPlayerCharacter(world, index);
    APlayerCameraManager* your_mom = UGameplayStatics::GetPlayerCameraManager(world, index);
    player2->UnPossess();
    player2->Possess((APawn*)helii);

}

int Ustatic_functions::veiwswat(bool isg, FVector curr_veiw, int pos) {
    float right_should = 3654;
    float left_should = 1245;
    //maybe eventually make this a function to increment the veiwpoint
    if (isg) {
        if (curr_veiw.Y < 234) curr_veiw.Y = right_should;
        else curr_veiw.Y = left_should;
    }
    else {
        
        
    }
    //we also might want to try doing the play annimations thing
    return 0;
}

AActor* Ustatic_functions::spawn_hallucin(TArray<AActor*> obj_list, APlayerController* m, APawn* dick) {
    FVector2D ranger = FMath::RandPointInCircle(432);
    float range3 = FMath::RandRange(-25, 25);
    int range = FMath::RandRange(0, (obj_list.Num()) - 1);
    //int obj = rand() % 10;
    AActor* obj2 = obj_list[range];
    UWorld* help = m->GetWorld();
    FRotator bit = FRotator(0);
    FVector aLocation = dick->GetActorLocation();
    FActorSpawnParameters reall;
    FVector Location = FVector(ranger, range3) + aLocation;
    AActor* fina = help->SpawnActor(obj2->GetClass(), &Location, &bit);
    return fina;
    
  
    
}


void Ustatic_functions::gen_hel_locate(FVector& in, FVector& dest) {
    FVector locations[4] = { FVector(18040.0, -243490.0, 400), FVector(104481, -86092, -860), FVector(-67830, 27050, 400), FVector(-80130.0,-210880.0, 500)};
    FVector destinations[4] = {FVector(34620.0, 27430.0, 8110.0), FVector(25420.0, -105360.0, 8600.0), FVector(-71400, -129790.0, 9200), FVector(29460.0, -38410.0, 9400.0)};
    int rlocation = FMath::RandRange(0, 3);
    int rdest2 = FMath::RandRange(0, 3);
    in = locations[rlocation];
    dest = destinations[rdest2];
}

AActor* Ustatic_functions::locate_player(TArray<AActor*> help)
{

    return nullptr;
}

AActor* Ustatic_functions::find_closestplaya(TArray<AActor*> help2, AActor* base_soildier, float& location, bool less_debug_msg)
{
    AActor* closest;
    AActor* closest23 = nullptr;
    FVector distance;
    FVector distance2;
    int loop;
    float new_dis;
    float x1;
    float x2;
    float x3;
    float y1;
    float y2;
    float y3;
    int player_num = 0;
    if (!less_debug_msg) {
        FString msg = "number of player controllers to track:";
        msg.AppendInt(help2.Num());
        GEngine->AddOnScreenDebugMessage(-1, 4.0, FColor::Orange, msg);
    }
    distance2 = base_soildier->GetActorLocation();
    FString locations;
    float curren_dis = (float)999999999999999999; //this is not the best
    for (int x = 0; x < (help2.Num()+1); x++) {
        distance2 = FVector(0);
        x1 = distance2.X;
        x2 = distance2.Y;
        x3 = distance2.Z;
        distance2 = base_soildier->GetActorLocation();

        closest = help2.Pop(true);
        distance = FVector(0);
        distance = closest->GetActorLocation();
        y1 = distance.X;
        y2 = distance.Y;
        y3 = distance.Z;
        new_dis = 0;
        new_dis = FVector::Distance(distance, distance2);
        if (!less_debug_msg) {
            locations = "location of player ";
            locations.AppendInt(x);
            locations += ": ";
            locations.AppendInt(new_dis);
            GEngine->AddOnScreenDebugMessage(-1, 4.0, FColor::Orange, locations);
        }
        if (new_dis < curren_dis) {
            player_num = x;
            closest23 = closest;
            curren_dis = new_dis;
        }
        loop = x;

        //distance = closest -
    }
    FString distan = "distance to target";
    distan.AppendInt(curren_dis);
    location = curren_dis;
    if (!less_debug_msg) {

        GEngine->AddOnScreenDebugMessage(-1, 4.0, FColor::Orange, distan);
        FString yout = "targeted player:";
        yout.AppendInt(player_num);
        GEngine->AddOnScreenDebugMessage(-1, 4.0, FColor::Orange, yout);
    }
    return closest23;

    
}

FVector Ustatic_functions::generate_solider_helper(APawn* player)
{
    int max_counter = 10;
    int count = 1;
    FVector selected_des1;
    FVector destinations[4] = { FVector(34620.0, 27430.0, 8110.0), FVector(25420.0, -105360.0, 8600.0), FVector(-71400, -129790.0, 9200), FVector(29460.0, -38410.0, 9400.0) };
    int rlocation = FMath::RandRange(0, 3);
    int dis;
    selected_des1 = destinations[rlocation];
    dis = FVector::Distance(selected_des1, player->GetActorLocation());
    /*while (dis < 10000) {
        rlocation = FMath::RandRange(0, 3);
        selected_des1 = destinations[rlocation];
        dis = FVector::Distance(selected_des1, player->GetActorLocation());
        count++;
        if (count > 10) {
            break;
        }
    }*/
    
    return selected_des1;
}



