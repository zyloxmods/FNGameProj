#pragma once
#include "CoreMinimal.h"
#include "BuildingSMActor.h"
#include "BuildingAutoNav.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API ABuildingAutoNav : public ABuildingSMActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoAssignNavProperties: 1;
    
    ABuildingAutoNav();
};

