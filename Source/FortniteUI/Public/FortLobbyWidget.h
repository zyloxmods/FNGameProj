#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortActivatablePanel.h"
#include "FortLobbyWidget.generated.h"

class AAthenaSquadPedestalGroup;
class AFortTeamMemberPedestal;
class UFortLobbyPlayerPanel;
class UFortRadialPicker;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLobbyWidget : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAthenaSquadPedestalGroup* SquadPedestalGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortTeamMemberPedestal*> VisualOrderedPedestals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortRadialPicker* Radial_EmotePicker;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLobbyPlayerPanel* PlayerPanel_PlayerOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle EmoteInputAction;
    
public:
    UFortLobbyWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerPanelHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerClicked();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleEmoteClicked(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void DynamicHandleLoadingScreenVisibilityChanged(bool IsVisible);
    
};

