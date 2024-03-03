#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortCreativeTagCategory.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFortCreativeTagCategory : public FTableRowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SortPriority;
    
public:
    FORTNITEGAME_API FFortCreativeTagCategory();
};

