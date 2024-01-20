#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortTaggedUnlockBase.generated.h"

USTRUCT(BlueprintType)
struct FFortTaggedUnlockBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredTag;
    
    FORTNITEGAME_API FFortTaggedUnlockBase();
};

