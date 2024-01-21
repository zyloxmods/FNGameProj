#pragma once
#include "CoreMinimal.h"
#include "RarityArray.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FRarityArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> Items;
    
    FORTNITEUI_API FRarityArray();
};

