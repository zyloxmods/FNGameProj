#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "EInputActionState.h"
#include "EFrontEndCamera.h"
#include "EQuestMapScreenMode.h"
#include "FortEventQuestMapDataEntry.h"
#include "FortQuestMapDataEntry.h"
#include "EViewerNavigationDirection.h"
#include "FortQuestMapScreen.generated.h"

class UFortQuestItem;
class UFortQuestItemDefinition;
class UFortQuestMapData;
class UFortQuestMapDetailsPanel;
class UFortQuestMapEventCallout;
class UFortQuestMapViewer;

UCLASS(Blueprintable, EditInlineNew)
class UFortQuestMapScreen : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuestMapDetailsPanel* CampaignDetailsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuestMapDetailsPanel* EventDetailsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuestMapEventCallout* EventCalloutPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuestMapViewer* QuestMapViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestMapScreenMode CurrentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActiveEventFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortQuestMapDataEntry CampaignQuestMapDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEventQuestMapDataEntry EventQuestMapDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* CutoffQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestMapData* QuestMapData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortQuestMapDataEntry CurrentQuestMapDataTable;
    
public:
    UFortQuestMapScreen();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateQuestMapMode(EQuestMapScreenMode QuestMapMode);
    
    UFUNCTION(BlueprintCallable)
    void ToggleQuestMapState();
    
    UFUNCTION(BlueprintCallable)
    void SetQuestMapViewer(UFortQuestMapViewer* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnorePageNavigation(bool bIgnoreNavigation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFindCurrentActionVisibility(EInputActionState ActionVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetBeyondCutoffQuest(bool bBeyondCutoff);
    
    UFUNCTION(BlueprintCallable)
    bool IsEventFlagActive(const FString& EventFlag);
    
    UFUNCTION(BlueprintCallable)
    bool IsBeyondCutoffQuest();
    
    UFUNCTION(BlueprintCallable)
    void InitializeQuestData();
    
    UFUNCTION(BlueprintCallable)
    void HandleRequestCurrentQuestNavigation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleQuestPageChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleQuestIndexSelectionModelChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleQuestDetailsUpdated(UFortQuestItem* QuestDefinition);
    
    UFUNCTION(BlueprintCallable)
    void HandleMapViewerNavigationRequest(EViewerNavigationDirection Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMapModeSwitch();
    
    UFUNCTION(BlueprintCallable)
    void HandleEventQuestMapActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleEventCalloutDataChangedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFrontEndCamera GetCurrentPageCameraMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBeyondCutoffQuest() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckForNewMainQuest();
    
};

