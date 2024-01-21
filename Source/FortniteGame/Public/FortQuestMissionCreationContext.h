#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortQuestMissionCreationContext.generated.h"

class UFortMissionInfo;

USTRUCT(BlueprintType)
struct FFortQuestMissionCreationContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMissionInfo> MissionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagContainer> MissionCreationContextTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetQuestOwnerAsMissionOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberToSpawnInWorld;
    
    FORTNITEGAME_API FFortQuestMissionCreationContext();
};

