#pragma once
#include "CoreMinimal.h"
#include "SocialUserListHeader.h"
#include "SocialPartyInviteListHeader.generated.h"

class USocialPartyInvite;

UCLASS(Blueprintable)
class SOCIALUMG_API USocialPartyInviteListHeader : public USocialUserListHeader {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USocialPartyInvite*> PartyInvites;
    
public:
    USocialPartyInviteListHeader();
};

