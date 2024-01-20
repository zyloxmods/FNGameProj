#pragma once
#include "CoreMinimal.h"
#include "SocialUserListHeader.h"
#include "FortTeamMemberListHeader.generated.h"

class UFortTeamMemberItem;

UCLASS(Blueprintable)
class UFortTeamMemberListHeader : public USocialUserListHeader {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortTeamMemberItem*> TeamMemberItems;
    
public:
    UFortTeamMemberListHeader();
};

