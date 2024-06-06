#include "FortAnimNotify_AudioComponentParameters.h"

UFortAnimNotify_AudioComponentParameters::UFortAnimNotify_AudioComponentParameters() {
    Source = EFortNotifyAudioParamsStoreSource::Weapon;
    DataStoreName = TEXT("PrimaryFireAudioComponent");
    ParameterGroupName = TEXT("NotifyDrivenParams");
}

