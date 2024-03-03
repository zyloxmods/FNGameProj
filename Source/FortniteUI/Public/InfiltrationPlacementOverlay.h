#pragma once
#include "CoreMinimal.h"
#include "PostGamePlacementOverlay.h"
#include "InfiltrationPlacementOverlay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UInfiltrationPlacementOverlay : public UPostGamePlacementOverlay {
    GENERATED_BODY()
public:
    UInfiltrationPlacementOverlay();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetLocalPlayerTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntelDownloaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntelCaptured() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetDefendingTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetAttackingTeam() const;
    
};

