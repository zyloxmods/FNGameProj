#pragma once
#include "CoreMinimal.h"
#include "SocialToolkit.h"
#include "FortSocialToolkit.generated.h"

UCLASS(Blueprintable, Within=FortSocialManager)
class FORTNITEGAME_API UFortSocialToolkit : public USocialToolkit {
    GENERATED_BODY()
public:
    UFortSocialToolkit();
};

