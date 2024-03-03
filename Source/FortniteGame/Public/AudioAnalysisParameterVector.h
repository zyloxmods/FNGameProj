#pragma once
#include "CoreMinimal.h"
#include "AudioAnalysisParameterVector.generated.h"

class UMaterialParameterCollection;
class UNiagaraParameterCollection;

USTRUCT(BlueprintType)
struct FAudioAnalysisParameterVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ParamNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraParameterCollection* NiagaraCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebug: 1;
    
    FORTNITEGAME_API FAudioAnalysisParameterVector();
};

