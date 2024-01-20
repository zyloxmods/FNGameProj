#pragma once
#include "CoreMinimal.h"
#include "FortAthenaInventoryInformation.generated.h"

class UFortItemDefinition;
class UFortWorldItem;

USTRUCT(BlueprintType)
struct FFortAthenaInventoryInformation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItem* FortItem;
    
public:
    FORTNITEGAME_API FFortAthenaInventoryInformation();
};

