#pragma once
#include "CoreMinimal.h"
#include "ComponentWidgetPairings.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_HasCoupledWidgets.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_HasCoupledWidgets : public UFortControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentWidgetPairings> SpawnableWidgets;
    
public:
    UFortControllerComponent_HasCoupledWidgets();
protected:
    UFUNCTION(BlueprintCallable)
    void MakeComponentWidgetsOnAutonomous();
    
};

