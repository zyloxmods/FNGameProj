#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "Engine/DataTable.h"
#include "AthenaMapPanel.generated.h"

class UAthenaMapGamePanel;
class UAthenaMapLayerContainer;
class UCommonButton;
class USizeBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaMapPanel : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapGamePanel* GamePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapLayerContainer* MapLayerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBoxChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Athena_MapInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InspectChallengeInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CyclePageInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CloseMapPanelInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleMapCursorInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_MobileCycle;
    
public:
    UAthenaMapPanel();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateInspectText(const FText& InText);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInspectChallengesToggled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeViewMode(bool bChallengesFocusedMode);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInspectChallengeInputAction();
    
    UFUNCTION(BlueprintCallable)
    void HandleCyclePageInputAction();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeViewMode(bool bChallengesFocusedMode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowChallengePins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleShowChallengePinsChanged(bool bInShowChallengePins);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleMapCursorToggled(bool bShowingMapCursor);
    
};

