#pragma once
#include "CoreMinimal.h"
#include "GameFramework/LocalMessage.h"
#include "FortNotificationMessage.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortNotificationMessage : public ULocalMessage {
    GENERATED_BODY()
public:
    UFortNotificationMessage();
};

