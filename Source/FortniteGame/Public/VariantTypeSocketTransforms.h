#pragma once
#include "CoreMinimal.h"
#include "SocketTransformVariant.h"
#include "VariantTypeBase.h"
#include "VariantTypeSocketTransforms.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UVariantTypeSocketTransforms : public UVariantTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSocketTransformVariant> VariantSocketTransforms;
    
    UVariantTypeSocketTransforms();
};

