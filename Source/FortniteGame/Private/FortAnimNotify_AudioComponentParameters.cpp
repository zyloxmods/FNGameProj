#include "FortAnimNotify_AudioComponentParameters.h"

UFortAnimNotify_AudioComponentParameters::UFortAnimNotify_AudioComponentParameters() {
    this->Source = EFortNotifyAudioParamsStoreSource::Weapon;
    this->DataStoreName = TEXT("PrimaryFireAudioComponent");
    this->ParameterGroupName = TEXT("NotifyDrivenParams");
}

