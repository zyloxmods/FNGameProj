#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortFootstepAudioType.h"
#include "EFortFootstepPosition.h"
#include "EFortFootstepSurfaceType.h"
#include "FortFootstepAudioData.h"
#include "FortFootstepAudioBank.generated.h"

class USoundAttenuation;
class USoundBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortFootstepAudioBank : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortFootstepAudioData FootstepData1P[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortFootstepAudioData FootstepData3P[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortFootstepSurfaceType::Type> PhysicalSurfaceMappings[26];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeammateVolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFootstepDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalPitchMaxBelow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalPitchMaxAbove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalPitchTileRange;
    
    UFortFootstepAudioBank();
    UFUNCTION(BlueprintCallable)
    USoundBase* GetSoundAsset(bool bIsLocal, TEnumAsByte<EFortFootstepAudioType::Type> StepType, TEnumAsByte<EFortFootstepSurfaceType::Type> SurfaceType, TEnumAsByte<EFortFootstepPosition::Type> StepPosition);
    
    UFUNCTION(BlueprintCallable)
    float GetFootstepVolumeMultiplier(bool bIsLocal, bool bApplyTeammateVolume, TEnumAsByte<EFortFootstepAudioType::Type> StepType);
    
    UFUNCTION(BlueprintCallable)
    USoundAttenuation* GetAttenuationAsset(bool bIsLocal, TEnumAsByte<EFortFootstepAudioType::Type> StepType, TEnumAsByte<EFortFootstepPosition::Type> StepPosition);
    
};

