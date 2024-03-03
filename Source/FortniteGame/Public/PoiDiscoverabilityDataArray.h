#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PoiDiscoverabilityDataEntry.h"
#include "PoiDiscoverabilityDataArray.generated.h"

class UFortControllerComponent_MapDiscoverability;

USTRUCT(BlueprintType)
struct FPoiDiscoverabilityDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoiDiscoverabilityDataEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_MapDiscoverability* Owner;
    
    FORTNITEGAME_API FPoiDiscoverabilityDataArray();
};

