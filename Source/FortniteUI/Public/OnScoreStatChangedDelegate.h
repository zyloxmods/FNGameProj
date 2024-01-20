#pragma once
#include "CoreMinimal.h"
#include "EFortReplicatedStat.h"
#include "EStatCategory.h"
#include "OnScoreStatChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnScoreStatChanged, int32, StatDelta, const FText&, StatName, TEnumAsByte<EFortReplicatedStat::Type>, StatType, EStatCategory, StatCategory);

