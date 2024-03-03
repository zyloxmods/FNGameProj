#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "ELeaderboardDisplayType.h"
#include "FortLeaderboardListViewWrapper.generated.h"

class UHorizontalBox;
class UListView;

UCLASS(Blueprintable, EditInlineNew)
class UFortLeaderboardListViewWrapper : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* ListView_LeaderboardEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* Content_LoadingEntries;
    
public:
    UFortLeaderboardListViewWrapper();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaderboardEntryAdded(ELeaderboardDisplayType NewDisplayType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaderboardDisplayTypeChanged(ELeaderboardDisplayType NewDisplayType);
    
};

