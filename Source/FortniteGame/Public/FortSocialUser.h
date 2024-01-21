#pragma once
#include "CoreMinimal.h"
#include "User/SocialUser.h"
#include "FortSocialUser.generated.h"

UCLASS(Blueprintable, Within=FortSocialToolkit)
class FORTNITEGAME_API UFortSocialUser : public USocialUser {
    GENERATED_BODY()
public:
    UFortSocialUser();
};

