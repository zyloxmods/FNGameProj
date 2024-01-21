#pragma once
#include "CoreMinimal.h"
#include "SocialUserListHeader.h"
#include "FortJoinablePartyListHeader.generated.h"

class UFortJoinablePartyItem;

UCLASS(Blueprintable)
class UFortJoinablePartyListHeader : public USocialUserListHeader {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortJoinablePartyItem*> JoinableParties;
    
public:
    UFortJoinablePartyListHeader();
};

