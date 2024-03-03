#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "AthenaAccountContext.generated.h"

class UAthenaSeasonItemDefinition;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UAthenaAccountContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UAthenaAccountContext();
    UFUNCTION(BlueprintCallable)
    void SimulateBattleBookPurchase(int32 NumLevelsToPurchase, int32& BonusLevelsGranted, bool& bOverLimit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldReplaceBattleStarsWithAlternateReward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtMaxBattlePassTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentSeasonNumberAsText(bool bFullText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSeasonNumber() const;
    
    UFUNCTION(BlueprintCallable)
    UAthenaSeasonItemDefinition* GetCurrentSeasonDefinition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentChapterNumberAsText(bool bFullText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentChapterAndSeasonText() const;
    
    UFUNCTION(BlueprintCallable)
    void GetBattleBookPurchaseLimit(int32& MaxNumLevelsPossibleToPurchase, int32& BonusLevelsGranted);
    
};

