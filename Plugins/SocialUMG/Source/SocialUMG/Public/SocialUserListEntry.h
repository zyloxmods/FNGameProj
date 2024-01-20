#pragma once
#include "CoreMinimal.h"
#include "EOnlineStatus.h"
#include "SocialListEntry.h"
#include "SocialUserListEntry.generated.h"

class USocialUser;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialUserListEntry : public USocialListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialUser* SocialUser;
    
public:
    USocialUserListEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUserPresenceChanged(EOnlineStatus OnlineStatus);
    
};

