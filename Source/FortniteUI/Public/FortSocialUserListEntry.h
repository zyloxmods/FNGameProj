#pragma once
#include "CoreMinimal.h"
#include "SocialUserListEntry.h"
#include "FortSocialUserListEntry.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSocialUserListEntry : public USocialUserListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Lock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_EncourageEpicFriend;
    
public:
    UFortSocialUserListEntry();
};

