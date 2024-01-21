#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "FortItemCard_StackCountBlock_Configuration.h"
#include "FortItemCard_M_TransformKey_Configuration.generated.h"

USTRUCT(BlueprintType)
struct FFortItemCard_M_TransformKey_Configuration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin BackgroundPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemCard_StackCountBlock_Configuration StackCountBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TransformKeyIconSize;
    
    FORTNITEUI_API FFortItemCard_M_TransformKey_Configuration();
};

