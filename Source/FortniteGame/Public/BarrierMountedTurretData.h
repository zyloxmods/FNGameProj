#pragma once
#include "CoreMinimal.h"
#include "BarrierMountedTurretData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FBarrierMountedTurretData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BaseMaterialOverride;
    
    FORTNITEGAME_API FBarrierMountedTurretData();
};

