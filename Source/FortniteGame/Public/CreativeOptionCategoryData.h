#pragma once
#include "CoreMinimal.h"
#include "CreativeOptionCategoryData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FCreativeOptionCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryTag;
    
    FCreativeOptionCategoryData();
};

