#pragma once
#include "CoreMinimal.h"
#include "FortUserWidget.h"
#include "FortLTMVictoryWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortLTMVictoryWidgetBase : public UFortUserWidget {
    GENERATED_BODY()
public:
    UFortLTMVictoryWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartIntroSequence();
    
};

