#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortControllerComponent.h"
#include "ItemGuidAndCount.h"
#include "FortControllerComponent_InventoryNetworkManagement.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_InventoryNetworkManagement : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UFortControllerComponent_InventoryNetworkManagement();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSwapItems(UObject* SourceOwner, UObject* TargetOwner, const TArray<FItemGuidAndCount>& ItemGuids);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSwapItem(UObject* SourceOwner, UObject* TargetOwner, FGuid ItemGuid, int32 Count);
    
};

