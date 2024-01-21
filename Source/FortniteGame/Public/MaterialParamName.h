#pragma once
#include "CoreMinimal.h"
#include "MaterialParamName.generated.h"

USTRUCT(BlueprintType)
struct FMaterialParamName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    FORTNITEGAME_API FMaterialParamName();
};

