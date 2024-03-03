#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MyFortCategoryData.h"
#include "FortAttributeCategory.generated.h"

UCLASS(Blueprintable)
class UFortAttributeCategory : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMyFortCategoryData> Categories;
    
    UFortAttributeCategory();
};

