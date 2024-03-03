#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EHealthBarType.h"
#include "AthenaSpectatorHitPointBarBase.generated.h"

class UAthenaRemotePlayerViewData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorHitPointBarBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHealthBarType BarType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastToCurrentUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDBNO;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAthenaRemotePlayerViewData> PlayerData;
    
public:
    UAthenaSpectatorHitPointBarBase();
    UFUNCTION(BlueprintCallable)
    void SetPlayerData(UAthenaRemotePlayerViewData* InPlayerData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnValueHealed(UAthenaRemotePlayerViewData* InPlayerData, float InValue, float InValueMax);
    
    UFUNCTION(BlueprintCallable)
    void OnValueDamaged(UAthenaRemotePlayerViewData* InPlayerData, float InValue, float InValueMax);
    
    UFUNCTION(BlueprintCallable)
    void OnEliminatedStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsEliminated);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeltaValueChanged(float InDeltaValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDBNOStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsDBNO);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDBNOChanged(bool bInIsDBNO);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurrentValueChanged(float InCurrentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeTextVisibility(bool bIsVisible);
    
};

