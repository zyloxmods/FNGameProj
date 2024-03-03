#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "FortCatabaScrollBox.generated.h"

UCLASS(Blueprintable)
class UFortCatabaScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFixedPageOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableClickThrough;
    
    UFortCatabaScrollBox();
};

