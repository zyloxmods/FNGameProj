#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayModifierHandle.generated.h"

USTRUCT(BlueprintType)
struct FActiveGameplayModifierHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
    FORTNITEGAME_API FActiveGameplayModifierHandle();
};

