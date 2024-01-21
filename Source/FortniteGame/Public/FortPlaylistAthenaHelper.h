#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAthenaGamePhaseStep.h"
#include "EFortPlaylistType.h"
#include "FortPlaylistAthenaHelper.generated.h"

class UFortPlaylistAthena;

UCLASS(Blueprintable)
class UFortPlaylistAthenaHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortPlaylistAthenaHelper();
    UFUNCTION(BlueprintCallable)
    static bool IsPlaygroundModePlaylist(const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGamePhaseNotificationSkipped(const UFortPlaylistAthena* Playlist, EAthenaGamePhaseStep GamePhaseToSkip);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCreativeModePlaylist(const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCreativeLTMPlaylist(const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable)
    static EFortPlaylistType GetPlaylistType(const UFortPlaylistAthena* Playlist);
    
};

