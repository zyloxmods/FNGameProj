#pragma once
#include "CoreMinimal.h"
#include "McpVariantReader.h"
#include "FortCosmeticLockerSlotsActiveVariants.generated.h"

USTRUCT(BlueprintType)
struct FFortCosmeticLockerSlotsActiveVariants {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantReader> Variants;
    
    FORTNITEGAME_API FFortCosmeticLockerSlotsActiveVariants();
};

