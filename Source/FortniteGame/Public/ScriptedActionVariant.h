#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ScriptedActionVariant.generated.h"

USTRUCT(BlueprintType)
struct FScriptedActionVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActionTag;
    
    FORTNITEGAME_API FScriptedActionVariant();
};

