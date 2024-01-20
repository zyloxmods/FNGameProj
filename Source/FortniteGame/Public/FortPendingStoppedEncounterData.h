#pragma once
#include "CoreMinimal.h"
#include "EFortObjectiveStatus.h"
#include "FortPendingStoppedEncounterData.generated.h"

class UFortAIEncounterInfo;

USTRUCT(BlueprintType)
struct FFortPendingStoppedEncounterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIEncounterInfo* Encounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortObjectiveStatus ObjectiveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDestroyAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEncounterCompletedSuccessfully;
    
    FORTNITEGAME_API FFortPendingStoppedEncounterData();
};

