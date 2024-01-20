#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "FortAnimNotify_PlayPetSound.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_PlayPetSound : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PetSoundTag;
    
    UFortAnimNotify_PlayPetSound();
};

