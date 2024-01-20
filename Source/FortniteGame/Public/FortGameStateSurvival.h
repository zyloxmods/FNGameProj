#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortGameStateZone.h"
#include "FortGameStateSurvival.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameStateSurvival : public AFortGameStateZone {
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

