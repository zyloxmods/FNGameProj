#pragma once
#include "CoreMinimal.h"
#include "BaseReplayEventInfo.h"
#include "MinimalHighlightShot.h"
#include "ReplayServerHighlights.generated.h"

USTRUCT(BlueprintType)
struct FReplayServerHighlights : public FBaseReplayEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMinimalHighlightShot> Shots;
    
    FORTNITEGAME_API FReplayServerHighlights();
};

