#pragma once
#include "CoreMinimal.h"
#include "PlatformOverrides.generated.h"

USTRUCT(BlueprintType)
struct FPlatformOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayOnPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlatformDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlatformHoverText;
    
    FORTNITEUI_API FPlatformOverrides();
};

