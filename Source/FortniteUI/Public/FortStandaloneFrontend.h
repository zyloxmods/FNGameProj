#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "FortAthenaLoadout.h"
#include "ActivatableScreenClosedEventDelegate.h"
#include "FortHUDShutdownTimerInterface.h"
#include "FortPrimaryContentInterface.h"
#include "FortStandaloneFrontend.generated.h"

class AFortPlayerPawn;
class UCommonButton;
class UCommonWidgetSwitcher;
class UFortPocketLevel;
class UFortTabListWidgetBase;
class UPocketLevelInstance;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortStandaloneFrontend : public UCommonActivatableWidget, public IFortPrimaryContentInterface, public IFortHUDShutdownTimerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCosmeticRefreshOnClose;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPocketLevel* PocketLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPocketLevelInstance* PocketLevelInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraLevelLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_TabContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Content_LoadingIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* OptionalTabList_MainContent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAthenaLoadout InitialLoadoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CloseMobile;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivatableScreenClosedEvent OnMenuClosed;
    
public:
    UFortStandaloneFrontend();
protected:
    UFUNCTION(BlueprintCallable)
    static void TriggerIncrementalGC();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingIndicatorShown(bool bShown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCameraLevelLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginLoadingCameraLevel();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTabSelected(FName TabNameID);
    
    UFUNCTION(BlueprintCallable)
    void HandleCloseRefreshComplete(AFortPlayerPawn* FortPawn);
    
    
    // Fix for true pure virtual functions not being implemented
};

