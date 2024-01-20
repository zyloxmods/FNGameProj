#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "PakWhitelistCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPakWhitelistCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UPakWhitelistCommandlet();
};

