#pragma once
#include "CoreMinimal.h"
#include "FortSquadSelectorButton.h"
#include "FortDefenderSquadSelectorButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDefenderSquadSelectorButton : public UFortSquadSelectorButton {
    GENERATED_BODY()
public:
    UFortDefenderSquadSelectorButton();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetTheaterUniqueId(FString& OutTheaterUniqueId, bool& OutIsUnlocked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetPowerLevel(int32& OutPowerLevel);
    
};

