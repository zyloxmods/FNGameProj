#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AISenseScalableConfig.h"
#include "AISenseScalableConfig_Sight.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAISenseScalableConfig_Sight : public UAISenseScalableConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SightRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LoseSightRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PeripheralVisionAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PointOfViewBackwardOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NearClippingRadius;
    
public:
    UAISenseScalableConfig_Sight();
};

