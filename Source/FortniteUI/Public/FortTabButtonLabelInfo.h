#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "FortTabButtonLabelInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortTabButtonLabelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush IconBrush;
    
    FORTNITEUI_API FFortTabButtonLabelInfo();
};

