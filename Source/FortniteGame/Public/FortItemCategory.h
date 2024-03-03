#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemCategory.h"
#include "ItemCategoryMappingData.h"
#include "FortItemCategory.generated.h"

UCLASS(Blueprintable)
class UFortItemCategory : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemCategoryMappingData> PrimaryCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemCategory> SecondaryCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemCategory> TertiaryCategories;
    
    UFortItemCategory();
};

