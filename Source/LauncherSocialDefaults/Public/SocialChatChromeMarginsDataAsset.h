#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ChatChromeMargins.h"
#include "SocialChatChromeMarginsDataAsset.generated.h"

UCLASS(Blueprintable)
class USocialChatChromeMarginsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatChromeMargins Style;
    
    USocialChatChromeMarginsDataAsset();
};

