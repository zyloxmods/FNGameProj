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
    static bool ShouldReturnToMatchmakingOriginOnMatchEnd(const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable)
    static bool ShouldEnterSpawningStartup(const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlaygroundModePlaylist(const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLargePreviewDisabledOnMobile(const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGuidedTutorialPlaylist(const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGamePhaseNotificationSkipped(const UFortPlaylistAthena* Playlist, EAthenaGamePhaseStep GamePhaseToSkip);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCreativeUtilitySpawningAllowedPlaylist(const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCreativeModePlaylist(const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCreativeMMPlaylist(const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCreativeLTMPlaylist(const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBattleLabModePlaylist(const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAnyCreativePlaylist(const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable)
    static bool HasCreativeTag(const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable)
    static EFortPlaylistType GetPlaylistType(const UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable)
    static float GetEndGameReturnToMatchmakingOriginDelay(const UFortPlaylistAthena* Playlist);
    
};

