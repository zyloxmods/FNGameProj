#pragma once
#include "CoreMinimal.h"
#include "Components/ListViewBase.h"
#include "SocialChatMessageList.generated.h"

class USocialChatChannel;

UCLASS(Blueprintable)
class SOCIALUMG_API USocialChatMessageList : public UListViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFocusable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialChatChannel* ActiveChannel;
    
public:
};

