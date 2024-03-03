#pragma once
#include "CoreMinimal.h"
#include "User/SocialUser.h"
#include "FortSocialUser.generated.h"

class UTexture2D;

UCLASS(Blueprintable, Within=FortSocialToolkit)
class FORTNITEGAME_API UFortSocialUser : public USocialUser {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* AvatarImage;
    
public:
    UFortSocialUser();
};

