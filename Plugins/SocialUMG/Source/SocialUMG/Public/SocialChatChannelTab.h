#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "SocialChatChannelTab.generated.h"

class UCommonTextBlock;
class USocialChatChannel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialChatChannelTab : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialChatChannel* ChatChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* CommonText_ChannelName;
    
public:
    USocialChatChannelTab();
};

