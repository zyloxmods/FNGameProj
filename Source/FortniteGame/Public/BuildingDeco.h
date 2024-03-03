#pragma once
#include "CoreMinimal.h"
#include "BuildingAutoNav.h"
#include "BuildingDeco.generated.h"

UCLASS(Blueprintable)
class ABuildingDeco : public ABuildingAutoNav {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCastShadow;
    
    ABuildingDeco();
};

