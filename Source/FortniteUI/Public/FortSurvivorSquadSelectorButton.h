#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortSquadSelectorButton.h"
#include "FortSurvivorSquadSelectorButtonPersonalityMatches.h"
#include "FortSurvivorSquadSelectorButtonSummaryStats.h"
#include "FortSurvivorSquadSelectorButton.generated.h"

class UFortWorker;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSurvivorSquadSelectorButton : public UFortSquadSelectorButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAttribute> FortStatAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAttribute> FortTeamStatAttributes;
    
    UFortSurvivorSquadSelectorButton();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetSummaryStats(FFortSurvivorSquadSelectorButtonSummaryStats& OutSummaryStats);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetSquadMembers(TArray<UFortWorker*>& OutSquadMembers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetPersonalityMatches(FFortSurvivorSquadSelectorButtonPersonalityMatches& OutPersonalityMatches);
    
};

