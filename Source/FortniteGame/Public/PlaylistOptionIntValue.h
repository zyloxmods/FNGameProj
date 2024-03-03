#pragma once
#include "CoreMinimal.h"
#include "PlaylistOptionValue.h"
#include "PlaylistOptionIntValue.generated.h"

USTRUCT(BlueprintType)
struct FPlaylistOptionIntValue : public FPlaylistOptionValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FORTNITEGAME_API FPlaylistOptionIntValue();
};

