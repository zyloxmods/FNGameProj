#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AthenaGameMessageData.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator.h"
#include "FortMutatorAudioStinger.h"
#include "FortAthenaMutator_GameModeBase.generated.h"

class AFortPlayerStateAthena;
class AFortSquadStart;
class UAudioComponent;
class UFortAudioEventForwarder;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_GameModeBase : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticallyFinishInitialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_AircraftPhaseIntroMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMutatorAudioStinger Stinger_MatchStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMutatorAudioStinger Stinger_MatchEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMutatorAudioStinger Stinger_MatchEndWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMutatorAudioStinger Stinger_MatchEndLose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* StingerAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAudioEventForwarder* StingerEventForwarder;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortSquadStart*> FortSquadStartActors;
    
public:
    AFortAthenaMutator_GameModeBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContainerTags);
    
    UFUNCTION(BlueprintCallable)
    void OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void HandleEndMatchStingerWaitingOnPlacement_Local(AFortPlayerStateAthena* Sender, int32 NewPlace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPOINameForTag(const FGameplayTag& POITag) const;
    
};

