#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ChatChromeStyle.h"
#include "SocialChatChromeStyleDataAsset.generated.h"

UCLASS(Blueprintable)
class USocialChatChromeStyleDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatChromeStyle Style;
    
    USocialChatChromeStyleDataAsset();
};

