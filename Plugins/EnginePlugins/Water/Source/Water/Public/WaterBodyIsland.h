#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaterBodyIsland.generated.h"

class UWaterSplineComponent;

UCLASS(Abstract, Blueprintable)
class WATER_API AWaterBodyIsland : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaterSplineComponent* SplineComp;
    
public:
    AWaterBodyIsland();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWaterSplineComponent* GetWaterSpline() const;
    
};

