#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "LetoPlayerAvatar.generated.h"

class UFortSocialAvatarIcon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ULetoPlayerAvatar : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialAvatarIcon* AvatarIcon;
    
public:
    ULetoPlayerAvatar();
};

