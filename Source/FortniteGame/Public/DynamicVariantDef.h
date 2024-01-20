#pragma once
#include "CoreMinimal.h"
#include "BaseVariantDef.h"
#include "DynamicVariantDef.generated.h"

class UVariantTypeBase;

USTRUCT(BlueprintType)
struct FDynamicVariantDef : public FBaseVariantDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVariantTypeBase*> DynamicVariants;
    
    FORTNITEGAME_API FDynamicVariantDef();
};

