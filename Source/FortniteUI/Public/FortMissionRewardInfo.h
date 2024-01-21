#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "FortMissionRewardInfo.generated.h"

class UFortItem;

USTRUCT(BlueprintType)
struct FFortMissionRewardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMissionAlertReward;
    
    FORTNITEUI_API FFortMissionRewardInfo();
};

