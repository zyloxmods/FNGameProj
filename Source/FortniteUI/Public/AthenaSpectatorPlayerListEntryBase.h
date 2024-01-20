#pragma once
#include "CoreMinimal.h"
#include "AthenaEventMatchPlayerWidgetBase.h"
#include "AthenaSpectatorPlayerListEntryBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorPlayerListEntryBase : public UAthenaEventMatchPlayerWidgetBase {
    GENERATED_BODY()
public:
    UAthenaSpectatorPlayerListEntryBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSquadIdVisible(bool bSquadIdVisible);
    
};

