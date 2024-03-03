#pragma once
#include "CoreMinimal.h"
#include "FortSocialListUserEntryBase.h"
#include "FortConnectionsUserListEntry.generated.h"

class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortConnectionsUserListEntry : public UFortSocialListUserEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_MutualFriends;
    
public:
    UFortConnectionsUserListEntry();
};

