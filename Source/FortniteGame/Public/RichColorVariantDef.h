#pragma once
#include "CoreMinimal.h"
#include "BaseVariantDef.h"
#include "CosmeticMetaTagContainer.h"
#include "RichColorVariant.h"
#include "RichColorVariantDef.generated.h"

USTRUCT(BlueprintType)
struct FRichColorVariantDef : public FBaseVariantDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmeticMetaTagContainer MetaTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichColorVariant RichColorVar;
    
    FORTNITEGAME_API FRichColorVariantDef();
};

