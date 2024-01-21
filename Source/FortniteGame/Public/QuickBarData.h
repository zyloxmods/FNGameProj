#pragma once
#include "CoreMinimal.h"
#include "QuickBarSlotData.h"
#include "QuickBarData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FQuickBarData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuickBarSlotData> QuickbarSlots;
    
    FQuickBarData();
};

