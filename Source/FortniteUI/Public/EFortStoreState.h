#pragma once
#include "CoreMinimal.h"
#include "EFortStoreState.generated.h"

UENUM(BlueprintType)
enum class EFortStoreState : uint8 {
    Error,
    Closed,
    CardPackStore,
    CurrencyStore,
    WebPayment,
    PurchaseOpen,
    PackOpen,
    CardEnter,
    CardBackReveal,
    CardFlip,
    CardFrontReveal,
    CardExit,
    SummaryAdd,
    PackDestroy,
    Summary,
    PresentChoice,
    ChoiceMade,
    SummaryAddTransition,
    MAX_None,
};

