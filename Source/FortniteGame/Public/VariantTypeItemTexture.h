#pragma once
#include "CoreMinimal.h"
#include "ItemTextureVariant.h"
#include "VariantTypeBase.h"
#include "VariantTypeItemTexture.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVariantTypeItemTexture : public UVariantTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemTextureVariant VariantItemTextures;
    
    UVariantTypeItemTexture();
};

