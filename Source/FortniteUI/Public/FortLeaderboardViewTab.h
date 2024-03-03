#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "ELeaderboardDisplayType.h"
#include "FortLeaderboardViewTab.generated.h"

class UCommonBorder;
class UCommonWidgetSwitcher;
class UFortLeaderboardListViewWrapper;
class UListView;

UCLASS(Blueprintable, EditInlineNew)
class UFortLeaderboardViewTab : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_LeaderboardEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLeaderboardListViewWrapper* ActivatableContent_LeaderboardListWrapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* Content_NoLeaderboardEntries;
    
public:
    UFortLeaderboardViewTab();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaderboardDisplayTypeChanged(ELeaderboardDisplayType NewDisplayType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UListView* GetListView() const;
    
};

