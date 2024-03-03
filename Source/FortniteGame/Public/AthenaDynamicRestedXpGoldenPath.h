#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AthenaDynamicRestedXpGoldenPath.generated.h"

USTRUCT(BlueprintType)
struct FAthenaDynamicRestedXpGoldenPath : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XP;
    
    FORTNITEGAME_API FAthenaDynamicRestedXpGoldenPath();
};

