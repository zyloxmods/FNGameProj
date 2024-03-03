#pragma once
#include "CoreMinimal.h"
#include "MarshalledVFXData.h"
#include "ParameterNameMapping.h"
#include "MarshalledVFXAuthoredData.generated.h"

USTRUCT(BlueprintType)
struct FMarshalledVFXAuthoredData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarshalledVFXData> NiagaraVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarshalledVFXData> CascadeVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FParameterNameMapping> NameReplacements;
    
    FORTNITEGAME_API FMarshalledVFXAuthoredData();
};

