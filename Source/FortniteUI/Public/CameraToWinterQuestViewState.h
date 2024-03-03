#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EWinterQuestViewState.h"
#include "CameraToWinterQuestViewState.generated.h"

USTRUCT(BlueprintType)
struct FCameraToWinterQuestViewState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWinterQuestViewState UIViewState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CameraTagsToSetFrom;
    
    FORTNITEUI_API FCameraToWinterQuestViewState();
};

