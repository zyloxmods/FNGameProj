#pragma once
#include "CoreMinimal.h"
#include "EWinterQuestViewState.generated.h"

UENUM(BlueprintType)
enum class EWinterQuestViewState : uint8 {
    Intro,
    Lobby,
    Preview,
    PurchaseConfirmation,
    Scenic,
    Fireplace,
    Stocking,
    Tree,
    PresentBundle,
    IndividualPresent,
    Transitioning,
    Invalid,
};

