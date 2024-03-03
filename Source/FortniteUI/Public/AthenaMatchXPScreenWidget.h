#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAthenaGamePhase.h"
#include "FortPostGameScreen.h"
#include "AthenaMatchXPScreenWidget.generated.h"

class UAthenaPreserveSquadButton;
class UCommonButton;
class UCommonWidgetSwitcher;
class UFortMatchXPDetails;
class UFortMatchXPRecap;
class UFortStandaloneFrontend;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMatchXPScreenWidget : public UFortPostGameScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoTransitionScreen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleMapInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumWidgetsFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortStandaloneFrontend> StandaloneItemShopClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaPreserveSquadButton* Button_StayTogether;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_NextMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_PrevTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_NextTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Replay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_StatToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* CommonWidgetSwitcher_DetailSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* CommonWidgetSwitcher_StatIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchXPDetails* Section_DetailsRecap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchXPRecap* Section_XPRecap;
    
public:
    UAthenaMatchXPScreenWidget();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateElementsVisibility();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpectatorStreamingChanged(bool bSpectatorStreaming);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStatButtonText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleDetailsRecap();
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void HandleResurrectingNow(bool bResurrectingNow);
    
};

