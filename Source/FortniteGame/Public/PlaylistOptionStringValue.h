#pragma once
#include "CoreMinimal.h"
#include "PlaylistOptionValue.h"
#include "PlaylistOptionStringValue.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FPlaylistOptionStringValue : public FPlaylistOptionValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FPlaylistOptionStringValue();
};

