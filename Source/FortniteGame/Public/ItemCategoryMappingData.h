#pragma once
#include "CoreMinimal.h"
#include "EFortItemType.h"
#include "ItemCategoryMappingData.generated.h"

USTRUCT(BlueprintType)
struct FItemCategoryMappingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemType CategoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    FORTNITEGAME_API FItemCategoryMappingData();
};

