#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "FortItemCard_NameplateBorder_Configuration.generated.h"

USTRUCT(BlueprintType)
struct FFortItemCard_NameplateBorder_Configuration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Padding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    FORTNITEUI_API FFortItemCard_NameplateBorder_Configuration();
};

