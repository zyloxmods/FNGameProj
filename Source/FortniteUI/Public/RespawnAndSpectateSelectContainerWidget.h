#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "RespawnAndSpectateSelectContainerWidget.generated.h"

class UCommonActivatablePanel;
class URespawnAndSpectateSelectWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class URespawnAndSpectateSelectContainerWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URespawnAndSpectateSelectWidgetBase> RespawnAndSpectateSelectWidgetClass;
    
public:
    URespawnAndSpectateSelectContainerWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateRespawnAndSpectateSelectWidgetVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void OnRespawnAndSpectateSelectPlayerRespawned();
    
    UFUNCTION(BlueprintCallable)
    void OnRespawnAndSpectateSelectAvailableOptionsChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPanelOptionSelected(int32 SelectedOption);
    
    UFUNCTION(BlueprintCallable)
    void OnPanelDeactivated(UCommonActivatablePanel* DeactivatedPanel);
    
    UFUNCTION(BlueprintCallable)
    void OnPanelActivated(UCommonActivatablePanel* ActivatedPanel);
    
};

