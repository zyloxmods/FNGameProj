#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlaySound.h"
#include "FortAnimNotify_PlaySoundLocalOnly.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_PlaySoundLocalOnly : public UAnimNotify_PlaySound {
    GENERATED_BODY()
public:
    UFortAnimNotify_PlaySoundLocalOnly();
};

