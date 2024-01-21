#pragma once
#include "CoreMinimal.h"
#include "Components/TreeView.h"
#include "Templates/SubclassOf.h"
#include "SocialUserTreeView.generated.h"

class USocialInteractionMenu;
class USocialInviteListEntry;
class USocialUserListEntry;

UCLASS(Blueprintable)
class SOCIALUMG_API USocialUserTreeView : public UTreeView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USocialUserListEntry> UserEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USocialInviteListEntry> InviteEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USocialInteractionMenu> ActionMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USocialInteractionMenu* ActionMenu;
    
public:
   // USocialUserTreeView();
};

