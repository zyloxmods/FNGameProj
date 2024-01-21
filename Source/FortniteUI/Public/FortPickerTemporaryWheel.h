#pragma once
#include "CoreMinimal.h"
#include "FortPickerTemporaryWheelItem.h"
#include "FortPickerTemporaryWheel.generated.h"

USTRUCT(BlueprintType)
struct FFortPickerTemporaryWheel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPickerTemporaryWheelItem> Items;
    
    FORTNITEUI_API FFortPickerTemporaryWheel();
};

