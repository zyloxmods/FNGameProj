#pragma once
#include "CoreMinimal.h"
#include "ZoneLoadingScreenHeadingConfig.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FZoneLoadingScreenHeadingConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* HeadingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Heading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeadingDescription;
    
    FORTNITEGAME_API FZoneLoadingScreenHeadingConfig();
};

