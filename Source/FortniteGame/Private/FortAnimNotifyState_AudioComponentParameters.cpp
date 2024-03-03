#include "FortAnimNotifyState_AudioComponentParameters.h"

UFortAnimNotifyState_AudioComponentParameters::UFortAnimNotifyState_AudioComponentParameters() {
    this->Source = EFortNotifyAudioParamsStoreSource::Weapon;
    this->DataStoreName = TEXT("PrimaryFireAudioComponent");
}

