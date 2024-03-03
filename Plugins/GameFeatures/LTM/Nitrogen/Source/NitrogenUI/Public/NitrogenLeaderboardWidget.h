#pragma once
#include "CoreMinimal.h"
#include "NitrogenLeaderboardData.h"
#include "NitrogenWidgetBase.h"
#include "NitrogenLeaderboardWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNitrogenLeaderboardWidget : public UNitrogenWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumScoreToDisplayTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGenericEnemyTeamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GenericEnemyTeamNameDescription;
    
public:
    UNitrogenLeaderboardWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void UpdateLeaderboardUI(const TArray<FNitrogenLeaderboardData>& LeaderboardInfo, const int32 GoalScore);
    
};

