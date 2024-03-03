#pragma once
#include "CoreMinimal.h"
#include "RichColorVariant.h"
#include "VariantTypeBase.h"
#include "VariantTypeRichColor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVariantTypeRichColor : public UVariantTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichColorVariant RichColorDef;
    
    UVariantTypeRichColor();
};

