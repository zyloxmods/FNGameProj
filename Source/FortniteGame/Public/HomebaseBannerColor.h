#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HomebaseBannerColor.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FHomebaseBannerColor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PrimaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SecondaryColor;
    
public:
    FHomebaseBannerColor();
};

