#pragma once
#include "CoreMinimal.h"
#include "SocialChatMessageEntryTextStyle.h"
#include "SocialChatMessageEntryStyle.generated.h"

USTRUCT(BlueprintType)
struct FSocialChatMessageEntryStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocialChatMessageEntryTextStyle SenderNameStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocialChatMessageEntryTextStyle ChannelNameStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocialChatMessageEntryTextStyle MessageTextStyle;
    
    SOCIALUMG_API FSocialChatMessageEntryStyle();
};

