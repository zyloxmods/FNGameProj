#pragma once
#include "CoreMinimal.h"
#include "FortAthenaLTMConfig.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFortAthenaLTMConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SplashImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FrontEndDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisabledMessage;
    
    FORTNITEGAME_API FFortAthenaLTMConfig();
};

