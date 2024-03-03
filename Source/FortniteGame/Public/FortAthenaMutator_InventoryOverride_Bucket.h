#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_InventoryOverride.h"
#include "ItemLoadoutBucket.h"
#include "FortAthenaMutator_InventoryOverride_Bucket.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_InventoryOverride_Bucket : public AFortAthenaMutator_InventoryOverride {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemLoadoutBucket> LoadoutBuckets;
    
public:
    AFortAthenaMutator_InventoryOverride_Bucket();
};

