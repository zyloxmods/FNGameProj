#include "RepGraphActorSettingsBase.h"

FRepGraphActorSettingsBase::FRepGraphActorSettingsBase() {
    bAddClassRepInfoToMap = false;
    bUseCustomClassRepInfo = false;
    bAddToExplicitCSVStatTracker = false;
    bAddToImplicitCSVStatTracker = false;
    bAddToRPC_Multicast_OpenChannelForClassMap = false;
    bRPC_Multicast_OpenChannelForClass = false;
    ClassNodeMapping = NotRouted;
}

