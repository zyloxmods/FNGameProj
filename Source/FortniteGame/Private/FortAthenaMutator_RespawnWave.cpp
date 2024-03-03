#include "FortAthenaMutator_RespawnWave.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_RespawnWave::OnWaveLaunched() {
}

void AFortAthenaMutator_RespawnWave::OnRep_WaveDataArray() {
}

float AFortAthenaMutator_RespawnWave::GetWaveTime_Implementation(uint8 Team) const {
    return 0.0f;
}

float AFortAthenaMutator_RespawnWave::GetTimeUntilNextWave(const AFortPlayerStateAthena* PlayerState) {
    return 0.0f;
}

void AFortAthenaMutator_RespawnWave::GetNextWavePlayerStates(const AFortPlayerStateAthena* PlayerState, TArray<AFortPlayerStateAthena*>& OutPlayerStates) {
}

int32 AFortAthenaMutator_RespawnWave::GetNextWavePlayerCount(const AFortPlayerStateAthena* PlayerState) {
    return 0;
}

void AFortAthenaMutator_RespawnWave::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_RespawnWave, WaveDataArray);
}

AFortAthenaMutator_RespawnWave::AFortAthenaMutator_RespawnWave() {
}

