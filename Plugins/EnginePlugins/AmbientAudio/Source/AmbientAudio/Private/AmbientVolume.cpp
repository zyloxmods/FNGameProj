#include "AmbientVolume.h"
#include "Net/UnrealNetwork.h"

void AAmbientVolume::SetPriority(int32 NewPriority) {
}

void AAmbientVolume::SetEnabled(bool bNewEnabled) {
}

void AAmbientVolume::SetCrossfadeTime(float NewCrossfadeTime) {
}

void AAmbientVolume::SetAmbientAsset(UAmbientAudioDataAsset* NewAmbientAsset) {
}

void AAmbientVolume::OnRep_bEnabled() {
}

void AAmbientVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAmbientVolume, bEnabled);
}

AAmbientVolume::AAmbientVolume() {
    this->AmbientAsset = NULL;
    this->Priority = 0;
    this->CrossfadeTime = 1;
    this->bEnabled = true;
    this->bGlobal = false;
}

