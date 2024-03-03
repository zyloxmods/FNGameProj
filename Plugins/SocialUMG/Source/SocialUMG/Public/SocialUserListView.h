#pragma once
#include "CoreMinimal.h"
#include "SocialUserListViewBase.h"
#include "Templates/SubclassOf.h"
#include "SocialUserListView.generated.h"

class USocialActionMenu;

UCLASS(Blueprintable)
class SOCIALUMG_API USocialUserListView : public USocialUserListViewBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USocialActionMenu* ActiveActionMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<USocialActionMenu>, USocialActionMenu*> CachedActionMenuPool;
    
public:
    USocialUserListView();
};

