#pragma once
#include "CoreMinimal.h"
#include "FortGameplayCueAudioInfo.h"
#include "FortGameplayCueCameraLensEffectInfo.h"
#include "FortGameplayCueCameraShakeInfo.h"
#include "FortGameplayCueDecalInfo.h"
#include "FortGameplayCueForceFeedbackInfo.h"
#include "FortGameplayCueParticleInfo.h"
#include "FortBurstEffectData.generated.h"

USTRUCT(BlueprintType)
struct FFortBurstEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayCueParticleInfo> BurstParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayCueAudioInfo> BurstSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueCameraShakeInfo BurstCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueCameraLensEffectInfo BurstCameraLensEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueForceFeedbackInfo BurstForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueDecalInfo BurstDecal;
    
    FORTNITEGAME_API FFortBurstEffectData();
};

