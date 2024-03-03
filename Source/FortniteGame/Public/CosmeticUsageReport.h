#pragma once
#include "CoreMinimal.h"
#include "VariantUsageReport.h"
#include "CosmeticUsageReport.generated.h"

class UAthenaCosmeticItemDefinition;

USTRUCT(BlueprintType)
struct FCosmeticUsageReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> TrackedCosmetics;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVariantUsageReport> VariantUsageByCosmetic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PrioritizedCosmeticIndices;
    
public:
    FORTNITEGAME_API FCosmeticUsageReport();
};

