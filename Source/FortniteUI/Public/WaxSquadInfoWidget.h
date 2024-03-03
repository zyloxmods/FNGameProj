#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "WaxSquadInfoWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWaxSquadInfoWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
    UWaxSquadInfoWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScore(int32 Score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlacement(int32 Placement);
    
};

