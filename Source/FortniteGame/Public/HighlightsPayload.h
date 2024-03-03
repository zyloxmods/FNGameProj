#pragma once
#include "CoreMinimal.h"
#include "HighlightReelPayload.h"
#include "HighlightsPayloadMeta.h"
#include "HighlightsPayload.generated.h"

USTRUCT(BlueprintType)
struct FHighlightsPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHighlightsPayloadMeta UCRN_Meta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHighlightReelPayload> UCRN_HighlightReels;
    
    FORTNITEGAME_API FHighlightsPayload();
};

