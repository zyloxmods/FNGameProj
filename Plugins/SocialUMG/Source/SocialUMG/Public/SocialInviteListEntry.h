#pragma once
#include "CoreMinimal.h"
#include "SocialListEntry.h"
#include "SocialInviteListEntry.generated.h"

class USocialFriendInvite;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialInviteListEntry : public USocialListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialFriendInvite* SocialInvite;
    
public:
    USocialInviteListEntry();
};

