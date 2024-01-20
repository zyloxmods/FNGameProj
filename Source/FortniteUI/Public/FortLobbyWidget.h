#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortLobbyWidget.generated.h"

class UFortLobbyPlayerPanel;
class UFortRadialPicker;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLobbyWidget : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLobbyPlayerPanel* PlayerPanel_PlayerOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortRadialPicker* Radial_EmotePicker;
    
public:
    UFortLobbyWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerPanelHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerClicked();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DynamicHandleLoadingScreenVisibilityChanged(bool IsVisible);
    
};

