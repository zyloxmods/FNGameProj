#pragma once
#include "CoreMinimal.h"
#include "FortGoalActorEncounterDataManagerPair.generated.h"

class AActor;
class AFortAIDirectorDataManager;

USTRUCT(BlueprintType)
struct FFortGoalActorEncounterDataManagerPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GoalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAIDirectorDataManager* EncounterDataManager;
    
    FORTNITEGAME_API FFortGoalActorEncounterDataManagerPair();
};

