#pragma once
#include "CoreMinimal.h"
#include "FortInventory.h"
#include "FortInventoryOutpost.generated.h"

class UFortWorldItem;

UCLASS(Blueprintable, MinimalAPI)
class AFortInventoryOutpost : public AFortInventory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortWorldItem*> UnavailableItemInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasUnavailableItems;
    
public:
    AFortInventoryOutpost();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

