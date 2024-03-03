#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "BuildingTrapFloor.h"
#include "BuildingTrapLauncher.generated.h"

UCLASS(Blueprintable)
class ABuildingTrapLauncher : public ABuildingTrapFloor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LaunchStrength;
    
    ABuildingTrapLauncher();
};

