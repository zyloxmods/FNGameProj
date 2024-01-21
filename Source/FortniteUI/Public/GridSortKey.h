#pragma once
#include "CoreMinimal.h"
#include "GridSortKey.generated.h"

USTRUCT(BlueprintType)
struct FGridSortKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    FORTNITEUI_API FGridSortKey();
};

