#pragma once
#include "CoreMinimal.h"
#include "BuildingProp.h"
#include "EMusicTrackPlayback.h"
#include "MusicPlayerData.h"
#include "BuildingPropMusicPlayer.generated.h"

class UAudioComponent;
class UDataTable;
class USoundBase;

UCLASS(Blueprintable)
class ABuildingPropMusicPlayer : public ABuildingProp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCheckAlternateHotfixValue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayingByDefault: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayRandomSong: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> AvailableSongIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MusicTrackTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USoundBase>> MusicArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayingSongData, meta=(AllowPrivateAccess=true))
    FMusicPlayerData PlayingSongData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SongAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString SavedTrackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EMusicTrackPlayback PlaybackType;
    
public:
    ABuildingPropMusicPlayer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartSongForOptionsChange();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayingSongData();
    
};

