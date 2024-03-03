#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemAndCount.h"
#include "FortAthenaAIBotInventoryItems.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAIBotInventoryItems : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> Items;
    
public:
    UFortAthenaAIBotInventoryItems();
};

