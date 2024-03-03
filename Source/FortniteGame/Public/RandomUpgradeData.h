#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "MarkedActorDisplayInfo.h"
#include "RandomUpgradeCalendarData.h"
#include "RandomUpgradeData.generated.h"

USTRUCT(BlueprintType)
struct FRandomUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LootTierGroupIfApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ChanceToApplyPerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomUpgradeCalendarData> CalendarDrivenEnableState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarkedActorDisplayInfo> MarkerDisplayInfoOverride;
    
    FORTNITEGAME_API FRandomUpgradeData();
};

