#pragma once
#include "CoreMinimal.h"
#include "TimeOfDayBlueprintDefaultVariables.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FTimeOfDayBlueprintDefaultVariables {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* AlternateShadowStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumetricLightScatteringIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableTODLightsAndMaterialEmissiveValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableStaticMeshShadowCastingWhenLightsAreActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAnAlternateShadowMeshWhenTheLightIsOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCastVolumetricShadows;
    
    FORTNITEGAME_API FTimeOfDayBlueprintDefaultVariables();
};

