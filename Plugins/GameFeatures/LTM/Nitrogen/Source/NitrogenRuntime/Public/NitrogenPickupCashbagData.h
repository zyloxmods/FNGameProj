#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.h"
#include "AttributeSet.h"
#include "Templates/SubclassOf.h"
#include "NitrogenPickupCashbagData.generated.h"

class ANitrogenPickup;
class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FNitrogenPickupCashbagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity ItemRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SelectionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANitrogenPickup> PickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* PickupItemDef;
    
    NITROGENRUNTIME_API FNitrogenPickupCashbagData();
};

