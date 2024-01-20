#pragma once
#include "CoreMinimal.h"
#include "SocialUserListHeader.h"
#include "SocialFriendInviteListHeader.generated.h"

class USocialFriendInvite;

UCLASS(Blueprintable)
class SOCIALUMG_API USocialFriendInviteListHeader : public USocialUserListHeader {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USocialFriendInvite*> FriendInvites;
    
public:
    USocialFriendInviteListHeader();
};

