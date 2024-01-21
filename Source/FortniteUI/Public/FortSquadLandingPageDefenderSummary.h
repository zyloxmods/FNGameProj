#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortLandingPageDefenderSummaryInfo.h"
#include "FortSquadLandingPageDefenderSummary.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSquadLandingPageDefenderSummary : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UFortSquadLandingPageDefenderSummary();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleClearDefenderSquadDetailsBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleAddLockedDefenderSquadDetailsBP(FFortLandingPageDefenderSummaryInfo DefenderSummaryInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleAddDefenderSquadDetailsBP(FFortLandingPageDefenderSummaryInfo DefenderSummaryInfo);
    
};

