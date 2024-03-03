#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortCreativeTag.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFortCreativeTag : public FTableRowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SortPriority;
    
public:
    FORTNITEGAME_API FFortCreativeTag();
};

