#pragma once
#include "CoreMinimal.h"
#include "EAthenaStormCapState.h"
#include "FortHUDElementWidget.h"
#include "AthenaStormSurgeWarningBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAthenaStormSurgeWarningBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UAthenaStormSurgeWarningBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnStormCapStateChanged(EAthenaStormCapState StormCapState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopDisplaying();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartDisplaying(const FText& TitleText, const FText& SubTitleText, bool bDisplaySubtitle, bool bPlayDamageActiveSound);
    
};

