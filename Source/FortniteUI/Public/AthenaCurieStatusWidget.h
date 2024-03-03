#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortHUDElementWidget.h"
#include "AthenaCurieStatusWidget.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaCurieStatusWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UAthenaCurieStatusWidget();
    UFUNCTION(BlueprintCallable)
    void SetPlayerState(AFortPlayerStateAthena* PlayerState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStatePawnChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurieStateRemoved(const FGameplayTag& RemovedState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurieStateAdded(const FGameplayTag& AddedState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasState(FGameplayTag CurieState) const;
    
};

