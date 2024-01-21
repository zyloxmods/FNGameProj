#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "BinaryWhitelistCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBinaryWhitelistCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UBinaryWhitelistCommandlet();
};

