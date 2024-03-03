#pragma once
#include "CoreMinimal.h"
#include "FortInGameMapManager.h"
#include "FortInGameMapManagerAthena.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API AFortInGameMapManagerAthena : public AFortInGameMapManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MapMaskMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MapMaskMaterialMID;
    
public:
    AFortInGameMapManagerAthena();
};

