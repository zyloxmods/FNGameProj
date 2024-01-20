#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "MapLocation.h"
#include "FortAthenaMutator_POIOverride.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_POIOverride : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapLocation> MapLocations;
    
public:
    AFortAthenaMutator_POIOverride();
};

