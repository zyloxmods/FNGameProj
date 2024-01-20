#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "ItemAndCount.h"
#include "FortAthenaMutator_StartingInventory.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_StartingInventory : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> StartingInventory;
    
public:
    AFortAthenaMutator_StartingInventory();
};

