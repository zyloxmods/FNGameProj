#pragma once
#include "CoreMinimal.h"
#include "EAshtonStoneStateType.h"
#include "EAshtonStoneType.h"
#include "LTMWidgetBase.h"
#include "AshtonWidgetBase.generated.h"

class AFortAthenaMutator_Ashton;

UCLASS(Blueprintable, EditInlineNew)
class UAshtonWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Ashton* AshtonMutatorRef;
    
public:
    UAshtonWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAllUI(bool bFirstUpdate);
    
    UFUNCTION(BlueprintCallable)
    void OnVillainRespawnsRemainingChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVillainRespawnCountChanged(int32 NumRespawnsLeft, float RespawnPercentLeft);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStoneListChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStoneChanged(EAshtonStoneType StoneType, EAshtonStoneStateType StoneState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseWidget();
    
};

