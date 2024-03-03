#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_RespawnWaveTeamData.h"
#include "OnRespawnWaveDataChangedDelegate.h"
#include "FortAthenaMutator_RespawnWave.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable)
class AFortAthenaMutator_RespawnWave : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DefaultWaveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaveTeamImbalanceTimeMultiplier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRespawnWaveDataChanged OnWaveDataChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinRespawnWindowTimeReamining;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WaveDataArray, meta=(AllowPrivateAccess=true))
    TArray<FFortAthenaMutator_RespawnWaveTeamData> WaveDataArray;
    
public:
    AFortAthenaMutator_RespawnWave();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWaveLaunched();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WaveDataArray();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetWaveTime(uint8 Team) const;
    
public:
    UFUNCTION(BlueprintCallable)
    float GetTimeUntilNextWave(const AFortPlayerStateAthena* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void GetNextWavePlayerStates(const AFortPlayerStateAthena* PlayerState, TArray<AFortPlayerStateAthena*>& OutPlayerStates);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNextWavePlayerCount(const AFortPlayerStateAthena* PlayerState);
    
};

