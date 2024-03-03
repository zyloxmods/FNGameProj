#pragma once
#include "CoreMinimal.h"
#include "ScreenshotTransformPair.h"
#include "CosmeticScreenshotTestConfig.generated.h"

USTRUCT(BlueprintType)
struct FCosmeticScreenshotTestConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScreenshotResX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScreenshotResY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> CosmeticIgnores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> VariantIgnores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> CosmeticWhitelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FScreenshotTransformPair> IndividualOverrides;
    
    FORTNITEGAME_API FCosmeticScreenshotTestConfig();
};

