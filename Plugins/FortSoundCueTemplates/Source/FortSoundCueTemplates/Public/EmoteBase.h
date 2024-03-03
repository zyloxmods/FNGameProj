#pragma once
#include "CoreMinimal.h"
#include "FortSoundCueTemplateBase.h"
#include "EmoteBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTSOUNDCUETEMPLATES_API UEmoteBase : public UFortSoundCueTemplateBase {
    GENERATED_BODY()
public:
    UEmoteBase();
};

