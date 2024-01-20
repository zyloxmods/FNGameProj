#pragma once
#include "CoreMinimal.h"
#include "EFortBuffState.h"
#include "FortMultiSizeImage.h"
#include "FortComparisonResultIndicator.generated.h"

UCLASS(Blueprintable)
class UFortComparisonResultIndicator : public UFortMultiSizeImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCollapseWhenNotShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortBuffState ComparisonResult;
    
    UFortComparisonResultIndicator();
    UFUNCTION(BlueprintCallable)
    void SetComparisonResult(EFortBuffState NewComparisonResult);
    
};

