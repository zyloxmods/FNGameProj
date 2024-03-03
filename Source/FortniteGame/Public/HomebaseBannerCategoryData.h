#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HomebaseBannerCategoryData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FHomebaseBannerCategoryData : public FTableRowBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortPriority;
    
public:
    FHomebaseBannerCategoryData();
};

