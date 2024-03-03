#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "CobaltPlayersLeftWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCobaltPlayersLeftWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
    UCobaltPlayersLeftWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisplay(int32 NewTeamPlayersLeft, int32 NewEnemyPlayersLeft);
    
};

