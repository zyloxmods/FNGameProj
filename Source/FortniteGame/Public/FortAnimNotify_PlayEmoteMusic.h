#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlaySound.h"
#include "FortAnimNotify_PlayEmoteMusic.generated.h"

class USoundBase;

UCLASS(Blueprintable, CollapseCategories)
class FORTNITEGAME_API UFortAnimNotify_PlayEmoteMusic : public UAnimNotify_PlaySound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound3P;
    
    UFortAnimNotify_PlayEmoteMusic();
};

