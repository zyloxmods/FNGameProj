#pragma once
#include "CoreMinimal.h"
#include "CobaltWidgetBase.h"
#include "CobaltRoundCompleteWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCobaltRoundCompleteWidgetBase : public UCobaltWidgetBase {
    GENERATED_BODY()
public:
    UCobaltRoundCompleteWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDisplay(bool bIsWin, bool bWasTie, bool bViewingWidgetOwner, int32 RoundNum, const FText& RoundName, const FText& POIName, int32 PrimaryTeamScore, int32 OpposingTeamScore);
    
    UFUNCTION(BlueprintCallable)
    void OnRoundComplete(const TArray<uint8>& WinningTeams);
    
    UFUNCTION(BlueprintCallable)
    void HideWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideDisplay();
    
};

