#pragma once
#include "CoreMinimal.h"
#include "SocialUserTreeView.h"
#include "Templates/SubclassOf.h"
#include "FortSocialUserTreeView.generated.h"

class UFortJoinablePartyListEntry;
class UFortPartyMemberListEntry;
class UFortTeamMemberListEntry;

UCLASS(Blueprintable)
class UFortSocialUserTreeView : public USocialUserTreeView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPartyMemberListEntry> PartyMemberEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortTeamMemberListEntry> TeamMemberEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortJoinablePartyListEntry> JoinablePartyEntryWidgetClass;
    
public:
    UFortSocialUserTreeView();
};

