#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PlaylistOptionValue.h"
#include "PlaylistOptionFloatValue.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FPlaylistOptionFloatValue : public FPlaylistOptionValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Value;
    
    FPlaylistOptionFloatValue();
};

