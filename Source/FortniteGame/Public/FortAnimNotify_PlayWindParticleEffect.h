#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h"
#include "FortAnimNotify_PlayWindParticleEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_PlayWindParticleEffect : public UAnimNotify_PlayParticleEffect {
    GENERATED_BODY()
public:
    UFortAnimNotify_PlayWindParticleEffect();
};

