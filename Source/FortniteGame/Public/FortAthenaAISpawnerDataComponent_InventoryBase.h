#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent.h"
#include "ItemAndCount.h"
#include "FortAthenaAISpawnerDataComponent_InventoryBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_InventoryBase : public UFortAthenaAISpawnerDataComponent {
    GENERATED_BODY()
public:
    UFortAthenaAISpawnerDataComponent_InventoryBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetInventoryItems(TArray<FItemAndCount>& OutList);
    
};

