#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "FortLeaderboardContext.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UFortLeaderboardContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UFortLeaderboardContext();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowStats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowLeaderboards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowGlobalLeaderboards() const;
    
};

