#pragma once
#include "CoreMinimal.h"
#include "SocialListUserEntryBase.h"
#include "FortSocialListUserEntryBase.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSocialListUserEntryBase : public USocialListUserEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_EncourageEpicFriend;
    
public:
    UFortSocialListUserEntryBase();
};

