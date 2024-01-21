#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortResultsSummaryScreenWidget.generated.h"

class UFortUIScoreReport;

UCLASS(Blueprintable, EditInlineNew)
class UFortResultsSummaryScreenWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UFortResultsSummaryScreenWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTotalScoreSortedScoreIndices(const UFortUIScoreReport* ScoreReport, TArray<int32>& OutSortedScoreIndices) const;
    
};

