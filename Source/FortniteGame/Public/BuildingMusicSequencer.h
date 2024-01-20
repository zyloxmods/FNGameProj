#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BuildingTrapFloor.h"
#include "BuildingMusicSequencer.generated.h"

UCLASS(Blueprintable)
class ABuildingMusicSequencer : public ABuildingTrapFloor {
    GENERATED_BODY()
public:
    ABuildingMusicSequencer();
protected:
    UFUNCTION(BlueprintCallable)
    void ResetHitActors();
    
    UFUNCTION(BlueprintCallable)
    void HitActorsAsync(const FTransform& Transform, const FBoxSphereBounds& Bounds);
    
};

