#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "FortStatManagerTag.h"
#include "FortStatManagerTagHelperLib.generated.h"

UCLASS(Blueprintable)
class UFortStatManagerTagHelperLib : public UObject {
    GENERATED_BODY()
public:
    UFortStatManagerTagHelperLib();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFortStatManagerTag MakeStatManagerTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetEffectiveStatName(FFortStatManagerTag Tag);
    
};

