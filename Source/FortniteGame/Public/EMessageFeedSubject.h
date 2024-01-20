#pragma once
#include "CoreMinimal.h"
#include "EMessageFeedSubject.generated.h"

UENUM(BlueprintType)
enum class EMessageFeedSubject : uint8 {
    ToyOwner,
    OtherPlayerInteractingWithToy,
};

