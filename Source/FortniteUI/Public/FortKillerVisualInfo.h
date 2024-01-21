#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "FortKillerVisualInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortKillerVisualInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush KillerBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText KillerName;
    
    FORTNITEUI_API FFortKillerVisualInfo();
};

