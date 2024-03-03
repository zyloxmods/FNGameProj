#pragma once
#include "CoreMinimal.h"
#include "PlaylistAccess.h"
#include "PlaylistAccessOverride.h"
#include "PlaylistFrontEndSettings.generated.h"

USTRUCT(BlueprintType)
struct FPlaylistFrontEndSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaylistName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlaylistAccess PlaylistAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaylistAccessOverride> AccessOverrides;
    
    FORTNITEGAME_API FPlaylistFrontEndSettings();
};

