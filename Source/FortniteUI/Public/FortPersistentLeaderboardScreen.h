#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortCompetitiveLeaderboardScreen.h"
#include "FortTournamentDisplayInfo.h"
#include "FortPersistentLeaderboardScreen.generated.h"

class UCommonActionWidget;
class UCommonActivatableWidgetSwitcher;
class UCommonButton;
class UCommonButtonGroup;
class UDynamicEntryBox;
class UFortArenaPersonalViewTab;

UCLASS(Blueprintable, EditInlineNew)
class UFortPersistentLeaderboardScreen : public UFortCompetitiveLeaderboardScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ColorSchemeRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TabViewLeftAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TabViewRightAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_ViewButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* ActionWidget_TabLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* ActionWidget_TabRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetSwitcher* Switcher_ViewTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortArenaPersonalViewTab* ActivatableContent_MeViewTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonButton* GlobalTabButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonButton* MeTabButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* ViewButtonGroup;
    
public:
    UFortPersistentLeaderboardScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupForEvent(const FString& EventId, const FString& EventWindowId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnColorize(FFortTournamentDisplayInfo ColorInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleViewTabSelectionChanged(UCommonButton* TabButton, int32 TabIdx);
    
};

