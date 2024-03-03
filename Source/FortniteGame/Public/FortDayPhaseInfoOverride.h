#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CameraAltitudeAdjustments.h"
#include "DayPhaseInfo.h"
#include "FortDayPhaseInfoOverride.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UFortDayPhaseInfoOverride : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDayPhaseInfo DayPhaseInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAltitudeAdjustmentsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraAltitudeAdjustments> AltitudeAdjustments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAltitudeAdjustmentsForSecondFogOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraAltitudeAdjustments> AltitudeAdjustmentsForSecondFog;
    
    UFortDayPhaseInfoOverride();
};

