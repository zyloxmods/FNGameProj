#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "FortMobileImage.generated.h"

UCLASS(Blueprintable)
class UFortMobileImage : public UImage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileSizeMultiplier;
    
public:
    UFortMobileImage();
};

