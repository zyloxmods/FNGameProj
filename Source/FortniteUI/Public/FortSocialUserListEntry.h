#pragma once
#include "CoreMinimal.h"
#include "FortPresenceUserListEntry.h"
#include "FortSocialUserListEntry.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSocialUserListEntry : public UFortPresenceUserListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Lock;
    
public:
    UFortSocialUserListEntry();
};

