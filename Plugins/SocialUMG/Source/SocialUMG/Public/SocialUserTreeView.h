#pragma once
#include "CoreMinimal.h"
#include "SocialUserListView.h"
#include "Templates/SubclassOf.h"
#include "SocialUserTreeView.generated.h"

class USocialListUserEntryBase;

UCLASS(Blueprintable)
class SOCIALUMG_API USocialUserTreeView : public USocialUserListView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USocialListUserEntryBase> UserEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USocialListUserEntryBase> InviteEntryWidgetClass;
    
public:
    USocialUserTreeView();
};

