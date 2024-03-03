#pragma once
#include "CoreMinimal.h"
#include "GlyphUpdateTransition.generated.h"

USTRUCT(BlueprintType)
struct FGlyphUpdateTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeOffset;
    
    FORTNITEUI_API FGlyphUpdateTransition();
};

