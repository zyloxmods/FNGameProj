#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TagRestrictedTable.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FTagRestrictedTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> SoftTablePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQuery;
    
    FORTNITEGAME_API FTagRestrictedTable();
};

