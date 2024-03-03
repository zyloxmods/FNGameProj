#include "FortBangWrapper_NUI.h"

void UFortBangWrapper_NUI::UnregisterTutorialNameID() {
}

void UFortBangWrapper_NUI::SetTutorialNameID(FName InTutorialNameID) {
}

void UFortBangWrapper_NUI::SetBangType(EFortBangType NewBangType) {
}

void UFortBangWrapper_NUI::SetBangStateBP(bool bEnabled, int32 Count) {
}





void UFortBangWrapper_NUI::AsyncPlaySound2D(const UObject* WorldContextObject, TSoftObjectPtr<USoundBase> SoundToLoad, float VolumeMultiplier, float PitchMultiplier, float StartTime) {
}

UFortBangWrapper_NUI::UFortBangWrapper_NUI() {
    this->BangType = EFortBangType::Invalid;
    this->ContentSlot = NULL;
}

