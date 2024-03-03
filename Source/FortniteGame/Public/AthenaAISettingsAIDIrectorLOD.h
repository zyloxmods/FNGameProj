#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AttributeSet.h"
#include "FortAIDirectorPerLODConfig.h"
#include "PlayerLODViewConeConfig.h"
#include "PlayerLODViewConeHysteresisConfig.h"
#include "AthenaAISettingsAIDIrectorLOD.generated.h"

UCLASS(Blueprintable, CollapseCategories, Config=Engine, DefaultConfig, EditInlineNew)
class UAthenaAISettingsAIDIrectorLOD : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerLODViewConeConfig> PlayerLODViewConeConfigs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLODViewConeHysteresisConfig PlayerLODViewConeHysteresisConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CouldBeVisibleViewConeAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CouldBeVisibleMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LODSortHysteresisDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIDirectorPerLODConfig> FortAIDirectorLODConfigs;
    
    UAthenaAISettingsAIDIrectorLOD();
};

