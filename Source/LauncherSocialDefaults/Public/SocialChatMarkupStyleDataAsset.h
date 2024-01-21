#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ChatMarkupStyle.h"
#include "SocialChatMarkupStyleDataAsset.generated.h"

UCLASS(Blueprintable)
class USocialChatMarkupStyleDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatMarkupStyle Style;
    
    USocialChatMarkupStyleDataAsset();
};

