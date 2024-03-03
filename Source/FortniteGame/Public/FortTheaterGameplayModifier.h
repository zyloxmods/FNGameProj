#pragma once
#include "CoreMinimal.h"
#include "FortTheaterGameplayModifier.generated.h"

class UFortGameplayModifierItemDefinition;

USTRUCT(BlueprintType)
struct FFortTheaterGameplayModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGameplayModifierItemDefinition* GameplayModifier;
    
    FORTNITEGAME_API FFortTheaterGameplayModifier();
};

