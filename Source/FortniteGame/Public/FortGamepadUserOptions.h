#pragma once
#include "CoreMinimal.h"
#include "FortGamepadAdvancedOptions.h"
#include "FortGamepadBasicOptions.h"
#include "FortGamepadUserOptions.generated.h"

USTRUCT(BlueprintType)
struct FFortGamepadUserOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGamepadBasicOptions Basic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGamepadAdvancedOptions Advanced;
    
    FORTNITEGAME_API FFortGamepadUserOptions();
};

