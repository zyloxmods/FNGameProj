#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_InventoryBase.h"
#include "ItemAndCount.h"
#include "FortAthenaAISpawnerDataComponent_AIBotInventory.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_AIBotInventory : public UFortAthenaAISpawnerDataComponent_InventoryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bItemsToGiveInEditorWhenCustomizationIsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> EditorOnlyItems;
    
public:
    UFortAthenaAISpawnerDataComponent_AIBotInventory();
};

