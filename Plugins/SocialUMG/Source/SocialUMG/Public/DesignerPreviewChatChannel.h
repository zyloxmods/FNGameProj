#pragma once
#include "CoreMinimal.h"
#include "Chat/SocialChatChannel.h"
#include "DesignerPreviewChatChannel.generated.h"

UCLASS(Blueprintable)
class UDesignerPreviewChatChannel : public USocialChatChannel {
    GENERATED_BODY()
public:
    UDesignerPreviewChatChannel();
};

