#pragma once
#include "CoreMinimal.h"
#include "BaseVariantDef.h"
#include "SocketTransformVariant.h"
#include "SocketVariantDef.generated.h"

USTRUCT(BlueprintType)
struct FSocketVariantDef : public FBaseVariantDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSocketTransformVariant> SocketTransforms;
    
    FORTNITEGAME_API FSocketVariantDef();
};

