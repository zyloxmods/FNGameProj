#pragma once
#include "CoreMinimal.h"
#include "BuildingActorNavArea.h"
#include "BuildingProp.h"
#include "EBuildingWallArea.h"
#include "BuildingPropWall.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ABuildingPropWall : public ABuildingProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingActorNavArea AreaPatternOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBuildingWallArea::Type> AreaShapeType;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaWidthOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideAreaWidth: 1;
    
public:
    ABuildingPropWall();
};

