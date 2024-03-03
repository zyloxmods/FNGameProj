#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaterialParamName.h"
#include "MaterialVectorVariant.generated.h"

USTRUCT(BlueprintType)
struct FMaterialVectorVariant : public FMaterialParamName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Value;
    
    FORTNITEGAME_API FMaterialVectorVariant();
};

