#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EFortUIFriendNotificationType.h"
#include "FortUINotification.h"
#include "FortUIFriendNotification.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortUIFriendNotification : public UFortUINotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortUIFriendNotificationType FriendActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl FriendUniqueId;
    
    UFortUIFriendNotification();
};

