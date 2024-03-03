#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "ItemTextureVariantDef.h"
#include "FortCosmeticItemTexture.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortCosmeticItemTexture : public UFortCosmeticVariantBackedByArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemTextureVariantDef ItemTextureVar;
    
public:
    UFortCosmeticItemTexture();
};

