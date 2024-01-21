#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortChatRoomJoinHelper.generated.h"

class USocialChatChannel;

UCLASS(Blueprintable, Within=FortChatManager)
class UFortChatRoomJoinHelper : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialChatChannel* JoinedChannel;
    
public:
    UFortChatRoomJoinHelper();
};

