#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AthenaHUDBase.h"
#include "AthenaSpectatorHUDBase.generated.h"

class UAthenaSpectatorNameplateLayerBase;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaSpectatorHUDBase : public UAthenaHUDBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpectatorNameplateLayerBase* NameplateLayer;
    
public:
    UAthenaSpectatorHUDBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnableToPerformAction(FGameplayTagContainer FailedReason, const FText& FailureText);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSpectatorViewTargetChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerTargetingChanged(bool bIsTargeting);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNameplatesEnabledChanged(bool bInNameplatesEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIndicatorModeChanged(bool bIndicatorsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget);
    
};

