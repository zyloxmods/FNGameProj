#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ChatStyle.h"
#include "SocialChatStyleDataAsset.generated.h"

UCLASS(Blueprintable)
class USocialChatStyleDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatStyle Style;
    
    USocialChatStyleDataAsset();
};

