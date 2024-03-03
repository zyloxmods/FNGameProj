#pragma once
#include "CoreMinimal.h"
#include "BuildingTrapFloor.h"
#include "BuildingTrapFloor_Hoverboard_Curve.generated.h"

class UGameplayEffect;
class USceneComponent;

UCLASS(Blueprintable)
class ABuildingTrapFloor_Hoverboard_Curve : public ABuildingTrapFloor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayEffect* TriggeredEffect;
    
    ABuildingTrapFloor_Hoverboard_Curve();
};

