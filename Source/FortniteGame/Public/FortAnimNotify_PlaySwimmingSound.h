#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EFortSwimmingAudioType.h"
#include "FortAnimNotify_PlaySwimmingSound.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_PlaySwimmingSound : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortSwimmingAudioType::Type> SoundType;
    
    UFortAnimNotify_PlaySwimmingSound();
};

