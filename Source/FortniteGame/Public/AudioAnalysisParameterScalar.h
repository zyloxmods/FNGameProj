#pragma once
#include "CoreMinimal.h"
#include "AudioAnalysisParameterScalar.generated.h"

class UMaterialParameterCollection;
class UNiagaraParameterCollection;

USTRUCT(BlueprintType)
struct FAudioAnalysisParameterScalar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraParameterCollection* NiagaraCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebug: 1;
    
    FORTNITEGAME_API FAudioAnalysisParameterScalar();
};

