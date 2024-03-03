#pragma once
#include "CoreMinimal.h"
#include "ConditionalFoundationQuotaTier.generated.h"

class ABuildingFoundation;

USTRUCT(BlueprintType)
struct FConditionalFoundationQuotaTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ABuildingFoundation>> FoundationClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinFoundations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFoundations;
    
    FORTNITEGAME_API FConditionalFoundationQuotaTier();
};

