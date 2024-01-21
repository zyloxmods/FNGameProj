#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "LTMWidgetBase.h"
#include "GooseWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGooseWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
    UGooseWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateNumberOfPlanes(int32 FriendlyPlaneCount, int32 EnemyPlaneCount);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
};

