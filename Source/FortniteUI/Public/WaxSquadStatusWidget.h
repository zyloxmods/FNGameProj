#pragma once
#include "CoreMinimal.h"
#include "EWaxState.h"
#include "AthenaPlayerInfoBaseWidgetInterface.h"
#include "LTMWidgetBase.h"
#include "WaxSquadStatusWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWaxSquadStatusWidget : public ULTMWidgetBase, public IAthenaPlayerInfoBaseWidgetInterface {
    GENERATED_BODY()
public:
    UWaxSquadStatusWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateThreatValue(EWaxState NewWaxState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateScore(int32 NewScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLives(int32 NewScore);
    
    
    // Fix for true pure virtual functions not being implemented
};

