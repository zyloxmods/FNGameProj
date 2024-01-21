#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlaylistOptionValue.h"
#include "PlaylistOptionColorValue.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FPlaylistOptionColorValue : public FPlaylistOptionValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Value;
    
    FPlaylistOptionColorValue();
};

