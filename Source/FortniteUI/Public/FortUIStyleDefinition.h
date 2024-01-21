#pragma once
#include "CoreMinimal.h"
#include "FortUIStyleWindowButtons.h"
#include "FortUIStyleDefinition.generated.h"

USTRUCT(BlueprintType)
struct FFortUIStyleDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUIStyleWindowButtons WindowButtons;
    
    FORTNITEUI_API FFortUIStyleDefinition();
};

