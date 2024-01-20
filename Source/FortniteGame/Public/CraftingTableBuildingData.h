#pragma once
#include "CoreMinimal.h"
#include "OutpostBuildingData.h"
#include "Templates/SubclassOf.h"
#include "CraftingTableBuildingData.generated.h"

class UDataTable;
class UGameplayEffect;

USTRUCT(BlueprintType)
struct FCraftingTableBuildingData : public FOutpostBuildingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActivationCostData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ActivationEffect;
    
    FORTNITEGAME_API FCraftingTableBuildingData();
};

