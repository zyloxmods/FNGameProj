#pragma once
#include "CoreMinimal.h"
#include "PlatformPrefixIcon.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPlatformPrefixIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PrefixIcon;
    
    FORTNITEUI_API FPlatformPrefixIcon();
};

