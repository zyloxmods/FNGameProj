#pragma once
#include "CoreMinimal.h"
#include "FortPickerTemporaryWheelItem.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FFortPickerTemporaryWheelItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LabelOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* Item;
    
    FORTNITEUI_API FFortPickerTemporaryWheelItem();
};

