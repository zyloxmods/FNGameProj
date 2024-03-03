#pragma once
#include "CoreMinimal.h"
#include "AthenaStreamIdOverride.generated.h"

USTRUCT(BlueprintType)
struct FAthenaStreamIdOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverriddenId;
    
    FORTNITEGAME_API FAthenaStreamIdOverride();
};

