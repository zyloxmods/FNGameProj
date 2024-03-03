#pragma once
#include "CoreMinimal.h"
#include "AthenaMidSeasonUpdateItemReq.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FAthenaMidSeasonUpdateItemReq {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FORTNITEGAME_API FAthenaMidSeasonUpdateItemReq();
};

