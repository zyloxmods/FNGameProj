#pragma once
#include "CoreMinimal.h"
#include "FortChallengeBundleSpecialOffer.generated.h"

class UMaterial;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortChallengeBundleSpecialOffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Storefront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RichText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> OfferImage;
    
    FFortChallengeBundleSpecialOffer();
};

