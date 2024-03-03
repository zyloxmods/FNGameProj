#pragma once
#include "CoreMinimal.h"
#include "FortInGameMapManagerAthena.h"
#include "FortInGameMapManagerCreative.generated.h"

class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class AFortInGameMapManagerCreative : public AFortInGameMapManagerAthena {
    GENERATED_BODY()
public:
    AFortInGameMapManagerCreative();
protected:
    UFUNCTION(BlueprintCallable)
    void SetCreativeMapMaterial(UMaterialInterface* CreativeMapMaterial);
    
};

