#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "EFareGenerationMethod.h"
#include "NitrogenPOICombinationData.h"
#include "NitrogenPOICombinationMap.generated.h"

USTRUCT(BlueprintType)
struct FNitrogenPOICombinationMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FNitrogenPOICombinationData> POICombinationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFareGenerationMethod FareGenerationMethod;
    
    NITROGENRUNTIME_API FNitrogenPOICombinationMap();
};

