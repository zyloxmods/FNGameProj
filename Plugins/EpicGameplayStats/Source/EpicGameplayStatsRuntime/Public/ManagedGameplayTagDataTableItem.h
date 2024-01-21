#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ManagedGameplayTagDataTableItem.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FManagedGameplayTagDataTableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RootTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    EPICGAMEPLAYSTATSRUNTIME_API FManagedGameplayTagDataTableItem();
};

