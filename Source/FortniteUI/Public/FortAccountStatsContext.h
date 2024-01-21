#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "FortAccountStatsContext.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UFortAccountStatsContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UFortAccountStatsContext();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowAccountStats() const;
    
};

