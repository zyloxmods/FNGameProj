#pragma once
#include "CoreMinimal.h"
#include "LobbyBeaconState.h"
#include "ELobbyMissionGeneratorDetailsRequirement.h"
#include "FortLobbyBeaconState.generated.h"

class UFortMissionGenerator;

UCLASS(Abstract, Blueprintable, NonTransient)
class FORTNITEGAME_API AFortLobbyBeaconState : public ALobbyBeaconState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MatchmakingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionGeneratorClassPath, meta=(AllowPrivateAccess=true))
    FString MissionGeneratorClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMissionGenerator* CachedMissionGeneratorCDO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionGeneratorDetailsRequirement, meta=(AllowPrivateAccess=true))
    ELobbyMissionGeneratorDetailsRequirement MissionGeneratorDetailsRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWorldRecordLoaded;
    
public:
    AFortLobbyBeaconState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionGeneratorDetailsRequirement();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionGeneratorClassPath();
    
};

