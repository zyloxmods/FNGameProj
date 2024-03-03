#pragma once
#include "CoreMinimal.h"
#include "TouchInteractionIconOverride.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTouchInteractionIconOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> IconOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconScale;
    
    FORTNITEUI_API FTouchInteractionIconOverride();
};

