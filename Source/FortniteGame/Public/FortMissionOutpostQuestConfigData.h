#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMissionConfigData.h"
#include "FortMissionOutpostQuestConfigData.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortMissionOutpostQuestConfigData : public UFortMissionConfigData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LegTag;
    
    UFortMissionOutpostQuestConfigData();
};

