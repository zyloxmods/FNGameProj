#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SocialListEntry.h"
#include "FortJoinablePartyListEntry.generated.h"

class UFortJoinablePartyItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortJoinablePartyListEntry : public USocialListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor InviteTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortJoinablePartyItem* JoinableParty;
    
public:
    UFortJoinablePartyListEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInviteStatusUpdated(bool bIsInvited);
    
};

