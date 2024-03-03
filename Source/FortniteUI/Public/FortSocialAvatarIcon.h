#pragma once
#include "CoreMinimal.h"
#include "FortLazyImage.h"
#include "FortSocialAvatarIcon.generated.h"

class UFortSocialUser;
class UMaterialInterface;
class UTexture2D;

UCLASS(Blueprintable)
class UFortSocialAvatarIcon : public UFortLazyImage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* AvatarMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSocialUser* SocialUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* AvatarTexture;
    
public:
    UFortSocialAvatarIcon();
};

