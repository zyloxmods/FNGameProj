#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortItemCard_TierMeter_Configuration.generated.h"

USTRUCT(BlueprintType)
struct FFortItemCard_TierMeter_Configuration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PipSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterPipPadding;
    
    FORTNITEUI_API FFortItemCard_TierMeter_Configuration();
};

