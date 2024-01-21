#pragma once
#include "CoreMinimal.h"
#include "FortUserListHeaderInfo.generated.h"

class UFortSocialUserTreeView;
class USocialUserListHeader;

USTRUCT(BlueprintType)
struct FFortUserListHeaderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialUserListHeader* ListHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialUserTreeView* OwningTreeView;
    
    FORTNITEUI_API FFortUserListHeaderInfo();
};

