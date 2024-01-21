#pragma once
#include "CoreMinimal.h"
#include "FortEventQuestMapDataEntry.h"
#include "ECalloutNavigationDirection.h"
#include "FortActivatablePanel.h"
#include "FortQuestMapEventCallout.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQuestMapEventCallout : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortQuestMapEventCallout();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestClaimPending(bool bActiveEvent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNavigationPossible(const ECalloutNavigationDirection Direction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentEventNew() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArrowNewBangEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleEventIndexChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleEventDataChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleCurrentEventIndexSeen();
    
    UFUNCTION(BlueprintCallable)
    void HandleCalloutNavigation(const ECalloutNavigationDirection Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEventDataIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEventCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortEventQuestMapDataEntry GetCurrentEventDataEntry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBangEnabledForDirection(const ECalloutNavigationDirection Direction) const;
    
};

