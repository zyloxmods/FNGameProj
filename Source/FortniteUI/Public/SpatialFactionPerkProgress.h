#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "SpatialFactionPerkProgress.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USpatialFactionPerkProgress : public UCommonUserWidget {
    GENERATED_BODY()
public:
    USpatialFactionPerkProgress();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializePerkProgress(int32 FactionNumber, int32 PerkLevel, float PercentProgress, bool bIsRevealed, bool bIsCurrentFaction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFactionSet(bool bIsCurrentFaction);
    
};

