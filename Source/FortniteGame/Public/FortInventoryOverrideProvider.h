#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemAndCount.h"
#include "FortInventoryOverrideProvider.generated.h"

UINTERFACE(Blueprintable)
class UFortInventoryOverrideProvider : public UInterface {
    GENERATED_BODY()
};

class IFortInventoryOverrideProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetInventoryOverrides(TArray<FItemAndCount>& InventoryItems) const;
    
};

