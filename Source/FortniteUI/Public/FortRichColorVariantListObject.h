#pragma once
#include "CoreMinimal.h"
#include "VariantObject.h"
#include "FortRichColorVariantListObject.generated.h"

UCLASS(Blueprintable)
class UFortRichColorVariantListObject : public UVariantObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ColorName;
    
    UFortRichColorVariantListObject();
};

