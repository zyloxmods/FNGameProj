#pragma once
#include "CoreMinimal.h"
#include "ParameterNameMapping.generated.h"

USTRUCT(BlueprintType)
struct FParameterNameMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CascadeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NiagaraName;
    
    FORTNITEGAME_API FParameterNameMapping();
};

