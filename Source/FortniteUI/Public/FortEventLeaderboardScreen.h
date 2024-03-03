#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETournamentDisplayType.h"
#include "FortCompetitiveLeaderboardScreen.h"
#include "FortLeaderboardRequestIds.h"
#include "FortEventLeaderboardScreen.generated.h"

class UCommonActionWidget;
class UCommonButton;
class UCommonButtonGroup;
class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortEventLeaderboardScreen : public UFortCompetitiveLeaderboardScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETournamentDisplayType EventDisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TabViewLeftAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TabViewRightAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_ViewButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* ActionWidget_TabLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* ActionWidget_TabRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ViewLiveGames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* ViewButtonGroup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UCommonButton*, FFortLeaderboardRequestIds> TabButtonToTournamentIds;
    
public:
    UFortEventLeaderboardScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabVisibilityChange(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowLeaderboard();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetailsPanelUpdate(bool bShowDetailsPanel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeTabButton(UCommonButton* TabButton, const FText& TabText);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleViewTabSelectionChanged(UCommonButton* TabButton, int32 TabIdx);
    
};

