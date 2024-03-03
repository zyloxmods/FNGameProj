#pragma once
#include "CoreMinimal.h"
#include "ChallengeGiftBoxData.h"
#include "EAthenaRewardItemType.h"
#include "EAthenaRewardVisualImportanceType.h"
#include "AthenaRewardItemReference.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAthenaRewardItemReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeGiftBoxData RewardGiftBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsChaseReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaRewardItemType RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaRewardVisualImportanceType RewardVisualImportanceType;
    
    FAthenaRewardItemReference();
};

