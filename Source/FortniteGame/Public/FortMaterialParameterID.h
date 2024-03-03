#pragma once
#include "CoreMinimal.h"
#include "FortMaterialParameterID.generated.h"

USTRUCT(BlueprintType)
struct FFortMaterialParameterID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VariableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariableName;
    
    FORTNITEGAME_API FFortMaterialParameterID();
};

