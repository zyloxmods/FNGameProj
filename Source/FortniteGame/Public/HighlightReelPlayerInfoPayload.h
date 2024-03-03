#pragma once
#include "CoreMinimal.h"
#include "CosmeticLoadoutPayload.h"
#include "HighlightReelPlayerInfoPayload.generated.h"

USTRUCT(BlueprintType)
struct FHighlightReelPlayerInfoPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmeticLoadoutPayload UCRN_CosmeticInfo;
    
    FORTNITEGAME_API FHighlightReelPlayerInfoPayload();
};

