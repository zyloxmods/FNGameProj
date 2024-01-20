#pragma once
#include "CoreMinimal.h"
#include "OutpostBuildingData.h"
#include "OutpostFabricatorPerTheaterData.h"
#include "FabricatorBuildingData.generated.h"

class UDataTable;
class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FFabricatorBuildingData : public FOutpostBuildingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortWorldItemDefinition>> AlwaysAvailableFabricationItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultIngredientDisintergrationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOutpostFabricatorPerTheaterData> IngredientDisintergrationPerTheaterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FabricationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisintegrationToFabricationRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuantumGooProductionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> QuantumGooCapacityPerLevel;
    
    FORTNITEGAME_API FFabricatorBuildingData();
};

