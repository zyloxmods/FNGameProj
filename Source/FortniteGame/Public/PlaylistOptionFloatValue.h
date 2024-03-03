#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PlaylistOptionValue.h"
#include "PlaylistOptionFloatValue.generated.h"

USTRUCT(BlueprintType)
struct FPlaylistOptionFloatValue : public FPlaylistOptionValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Value;
    
    FORTNITEGAME_API FPlaylistOptionFloatValue();
};

