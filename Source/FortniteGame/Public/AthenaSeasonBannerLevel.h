#pragma once
#include "CoreMinimal.h"
#include "AthenaSeasonBannerLevel.generated.h"

class UMaterialInterface;
class UTexture2D;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAthenaSeasonBannerLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SurroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> BannerMaterial;
    
    FAthenaSeasonBannerLevel();
};

