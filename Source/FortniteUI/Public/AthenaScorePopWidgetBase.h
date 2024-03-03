#pragma once
#include "CoreMinimal.h"
#include "EAthenaScoringEvent.h"
#include "FortHUDElementWidget.h"
#include "AthenaScorePopWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAthenaScorePopWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UAthenaScorePopWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewScoreEarned(int32 NewScoreValue, const FText& NewScoreTypeText, int32 BigScoreThreshold);
    
    UFUNCTION(BlueprintCallable)
    void HandleNewScoreEarned(int32 NewPoints, EAthenaScoringEvent ScoreType);
    
};

