#pragma once
#include "CoreMinimal.h"
#include "QuickBarSlotData.h"
#include "QuickBarData.generated.h"

USTRUCT(BlueprintType)
struct FQuickBarData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuickBarSlotData> QuickbarSlots;
    
    FORTNITEGAME_API FQuickBarData();
};

