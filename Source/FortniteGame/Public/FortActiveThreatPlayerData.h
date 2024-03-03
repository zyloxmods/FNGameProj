#pragma once
#include "CoreMinimal.h"
#include "FortActiveThreatPlayerData.generated.h"

class AFortPlayerController;
class UFortAIEncounterInfo;

USTRUCT(BlueprintType)
struct FFortActiveThreatPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIEncounterInfo* Encounter;
    
    FORTNITEGAME_API FFortActiveThreatPlayerData();
};

