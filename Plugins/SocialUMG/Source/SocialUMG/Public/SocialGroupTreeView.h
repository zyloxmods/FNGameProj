#pragma once
#include "CoreMinimal.h"
#include "Components/TreeView.h"
#include "Templates/SubclassOf.h"
#include "SocialGroupTreeView.generated.h"

class USocialGroupListEntry;
class USocialInteractionMenu;
class USocialListUserEntryBase;

UCLASS(Blueprintable)
class SOCIALUMG_API USocialGroupTreeView : public UTreeView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USocialGroupListEntry> GroupEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USocialListUserEntryBase> UserEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USocialInteractionMenu> ActionMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USocialInteractionMenu* ActionMenu;
    
public:
};

