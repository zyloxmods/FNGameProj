#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "FortItemCard_LevelMeter_Configuration.generated.h"

USTRUCT(BlueprintType)
struct FFortItemCard_LevelMeter_Configuration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeterThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin MeterPadding;
    
    FORTNITEUI_API FFortItemCard_LevelMeter_Configuration();
};

