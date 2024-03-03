#pragma once
#include "CoreMinimal.h"
#include "BuildingTrapFloor.h"
#include "BuildingTrapFloor_Hoverboard.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class ABuildingTrapFloor_Hoverboard : public ABuildingTrapFloor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* DirectionArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushAmount;
    
    ABuildingTrapFloor_Hoverboard();
};

