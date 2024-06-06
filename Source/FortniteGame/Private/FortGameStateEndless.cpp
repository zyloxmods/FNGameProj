#include "FortGameStateEndless.h"
#include "Net/UnrealNetwork.h"

void AFortGameStateEndless::SetWaveNumber(int32 NewWaveNumber) {
}

int32 AFortGameStateEndless::GetWaveNumber() {
    return 0;
}

void AFortGameStateEndless::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameStateEndless, WaveNumber);
}

AFortGameStateEndless::AFortGameStateEndless() {
    WaveNumber = 0;
}

