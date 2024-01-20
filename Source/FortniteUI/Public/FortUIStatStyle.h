#pragma once
#include "CoreMinimal.h"
#include "ECommonNumericType.h"
#include "Styling/SlateBrush.h"
#include "FortUIStatStyle.generated.h"

USTRUCT(BlueprintType)
struct FFortUIStatStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HighestText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonNumericType NumericType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimalNotableValue;
    
    FORTNITEUI_API FFortUIStatStyle();
};

