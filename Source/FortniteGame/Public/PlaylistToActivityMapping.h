#pragma once
#include "CoreMinimal.h"
#include "PlaylistToActivityMapping.generated.h"

USTRUCT(BlueprintType)
struct FPlaylistToActivityMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaylistName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivityId;
    
    FORTNITEGAME_API FPlaylistToActivityMapping();
};

