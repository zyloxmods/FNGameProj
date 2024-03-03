#pragma once
#include "CoreMinimal.h"
#include "ArgonLeaderboardData.h"
#include "ArgonWidgetBase.h"
#include "ArgonLeaderboardWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UArgonLeaderboardWidget : public UArgonWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArgonLeaderboardData> LeaderboardEntries;
    
public:
    UArgonLeaderboardWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLeaderboardUI();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRacingPlayersByPlaceChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnAnyTeamTicketCountChanged();
    
};

