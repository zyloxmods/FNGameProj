#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESpatialCustomizationCategoryState.h"
#include "SpatialCustomizationCategoryStateData.generated.h"

USTRUCT(BlueprintType)
struct FSpatialCustomizationCategoryStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpatialCustomizationCategoryState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategorySelectionHeaderText;
    
    FORTNITEUI_API FSpatialCustomizationCategoryStateData();
};

