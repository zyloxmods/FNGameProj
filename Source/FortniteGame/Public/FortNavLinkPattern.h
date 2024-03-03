#pragma once
#include "CoreMinimal.h"
#include "FortNavLinkPattern.generated.h"

USTRUCT(BlueprintType)
struct FFortNavLinkPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PatternBits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WildcardBits;
    
    FORTNITEGAME_API FFortNavLinkPattern();
};

