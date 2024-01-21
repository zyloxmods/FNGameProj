#pragma once
#include "CoreMinimal.h"
#include "EOfferPurchaseError.h"
#include "GiftingErrorText.generated.h"

USTRUCT(BlueprintType)
struct FGiftingErrorText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOfferPurchaseError GiftingError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorDesc;
    
    FORTNITEUI_API FGiftingErrorText();
};

