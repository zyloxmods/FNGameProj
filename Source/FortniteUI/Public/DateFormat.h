#pragma once
#include "CoreMinimal.h"
#include "DateFormat.generated.h"

UENUM(BlueprintType)
enum DateFormat {
    CountdownTextual,
    CountdownNumeric,
    CountdownNumUnder12Hours,
    Date,
};

