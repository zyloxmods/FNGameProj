#pragma once
#include "CoreMinimal.h"
#include "AthenaSpatialCustomizationCategoryGroup.generated.h"

class UAthenaSpatialCustomizationCategoryEntry;

USTRUCT(BlueprintType)
struct FAthenaSpatialCustomizationCategoryGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaSpatialCustomizationCategoryEntry*> CategoryEntryList;
    
    FORTNITEUI_API FAthenaSpatialCustomizationCategoryGroup();
};

