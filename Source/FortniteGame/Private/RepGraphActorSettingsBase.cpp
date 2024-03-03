#include "RepGraphActorSettingsBase.h"

FRepGraphActorSettingsBase::FRepGraphActorSettingsBase() {
    this->bAddClassRepInfoToMap = false;
    this->bUseCustomClassRepInfo = false;
    this->bAddToExplicitCSVStatTracker = false;
    this->bAddToImplicitCSVStatTracker = false;
    this->bAddToRPC_Multicast_OpenChannelForClassMap = false;
    this->bRPC_Multicast_OpenChannelForClass = false;
    this->ClassNodeMapping = NotRouted;
}

