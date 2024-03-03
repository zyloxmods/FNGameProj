#pragma once
#include "CoreMinimal.h"
#include "SoundCueTemplate.h"
#include "FortSoundCueTemplateBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTSOUNDCUETEMPLATES_API UFortSoundCueTemplateBase : public USoundCueTemplate {
    GENERATED_BODY()
public:
    UFortSoundCueTemplateBase();
};

