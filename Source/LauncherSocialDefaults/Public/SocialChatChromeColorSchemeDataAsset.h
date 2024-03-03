#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ChatChromeColorScheme.h"
#include "SocialChatChromeColorSchemeDataAsset.generated.h"

UCLASS(Blueprintable)
class USocialChatChromeColorSchemeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatChromeColorScheme Style;
    
    USocialChatChromeColorSchemeDataAsset();
};

