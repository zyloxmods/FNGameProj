#pragma once
#include "CoreMinimal.h"
#include "ConsumedCriteriaData.generated.h"

USTRUCT(BlueprintType)
struct FConsumedCriteriaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PowerMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> CriteriaNames;
    
    FORTNITEUI_API FConsumedCriteriaData();
};

