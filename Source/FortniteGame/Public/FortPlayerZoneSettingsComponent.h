#pragma once
#include "CoreMinimal.h"
#include "EAthenaFogDensityOverride.h"
#include "EAthenaLightIntensityOverride.h"
#include "EAthenaTODColor.h"
#include "EAthenaTODPostProcess.h"
#include "EAthenaTimeOfDayOverride.h"
#include "FortPlayerSettingsComponentBase.h"
#include "FortPlayerZoneSettingsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPlayerZoneSettingsComponent : public UFortPlayerSettingsComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaTimeOfDayOverride TimeOfDayOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaTODPostProcess PostProcessOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaLightIntensityOverride LightIntensityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaTODColor LightColorOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaFogDensityOverride FogDensityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaTODColor FogColorOverride;
    
    UFortPlayerZoneSettingsComponent();
};

