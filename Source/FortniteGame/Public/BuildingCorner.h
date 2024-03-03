#pragma once
#include "CoreMinimal.h"
#include "BuildingAutoNav.h"
#include "BuildingCorner.generated.h"

class ABuildingSMActor;

UCLASS(Blueprintable)
class ABuildingCorner : public ABuildingAutoNav {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* PrimaryWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* SecondaryWall;
    
public:
    ABuildingCorner();
};

