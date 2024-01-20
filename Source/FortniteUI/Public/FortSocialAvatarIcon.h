#pragma once
#include "CoreMinimal.h"
#include "FortLazyImage.h"
#include "FortSocialAvatarIcon.generated.h"

class UFortSocialUser;

UCLASS(Blueprintable)
class UFortSocialAvatarIcon : public UFortLazyImage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSocialUser* SocialUser;
    
public:
    UFortSocialAvatarIcon();
};

