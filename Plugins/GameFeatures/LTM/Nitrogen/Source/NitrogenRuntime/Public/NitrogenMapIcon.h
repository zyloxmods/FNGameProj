#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Styling/SlateBrush.h"
#include "NitrogenMapIcon.generated.h"

USTRUCT(BlueprintType)
struct FNitrogenMapIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MapIconScale;
    
    NITROGENRUNTIME_API FNitrogenMapIcon();
};

