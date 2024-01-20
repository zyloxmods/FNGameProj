#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "FortItemCard_DetailAreaBorder_Configuration.generated.h"

USTRUCT(BlueprintType)
struct FFortItemCard_DetailAreaBorder_Configuration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Padding;
    
    FORTNITEUI_API FFortItemCard_DetailAreaBorder_Configuration();
};

