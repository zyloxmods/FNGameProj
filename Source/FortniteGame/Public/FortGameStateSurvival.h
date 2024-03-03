#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortGameStatePvE.h"
#include "FortGameStateSurvival.generated.h"

UCLASS(Blueprintable)
class AFortGameStateSurvival : public AFortGameStatePvE {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFireEndOfDayDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToDelayEndOfDayZoneScoreWidgetDisplay;
    
public:
    AFortGameStateSurvival();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGameDifficultyRow(const FDataTableRowHandle& GameDifficultyInfo);
    
};

