#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "AthenaBaseStatView.generated.h"

UCLASS(Blueprintable)
class UAthenaBaseStatView : public UObject {
    GENERATED_BODY()
public:
    UAthenaBaseStatView();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStat(const FGameplayTag& InStat) const;
    
};

