#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortAnimInput_VehicleDriverAnimAsset.h"
#include "FortVehicleAnimSet.generated.h"

UCLASS(Blueprintable)
class UFortVehicleAnimSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_VehicleDriverAnimAsset DefaultAnimAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_VehicleDriverAnimAsset FemaleOverrideAnimAsset;
    
    UFortVehicleAnimSet();
};

