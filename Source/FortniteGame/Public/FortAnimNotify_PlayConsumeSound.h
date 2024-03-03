#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlaySound.h"
#include "FortAnimNotify_PlayConsumeSound.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_PlayConsumeSound : public UAnimNotify_PlaySound {
    GENERATED_BODY()
public:
    UFortAnimNotify_PlayConsumeSound();
};

