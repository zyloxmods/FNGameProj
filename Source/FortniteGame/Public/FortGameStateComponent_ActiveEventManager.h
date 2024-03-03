#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGameStateComponent.h"
#include "FortGameStateComponent_ActiveEventManager.generated.h"

class AFortGameStateAthena;
class UFortPlaylist;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortGameStateComponent_ActiveEventManager : public UFortGameStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> EventsAlreadyApplied;
    
public:
    UFortGameStateComponent_ActiveEventManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlaylistDataReady(AFortGameStateAthena* GameState, const UFortPlaylist* Playlist, const FGameplayTagContainer& PlaylistContextTags);
    
    UFUNCTION(BlueprintCallable)
    void HandleActiveSeasonDataChanged(const TArray<FString>& ActiveEventFlags);
    
};

