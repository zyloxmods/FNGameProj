#pragma once
#include "CoreMinimal.h"
#include "BuildingSMActor.h"
#include "BuildingAutoNav.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class ABuildingAutoNav : public ABuildingSMActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoAssignNavProperties: 1;
    
    ABuildingAutoNav();
};

