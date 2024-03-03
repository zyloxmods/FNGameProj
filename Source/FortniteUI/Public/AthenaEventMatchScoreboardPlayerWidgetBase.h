#pragma once
#include "CoreMinimal.h"
#include "AthenaEventMatchPlayerWidgetBase.h"
#include "AthenaEventMatchScoreboardPlayerWidgetBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaEventMatchScoreboardPlayerWidgetBase : public UAthenaEventMatchPlayerWidgetBase {
    GENERATED_BODY()
public:
    UAthenaEventMatchScoreboardPlayerWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSquadIdVisible(bool InVisible);
    
};

