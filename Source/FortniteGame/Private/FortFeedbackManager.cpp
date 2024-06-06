#include "FortFeedbackManager.h"
#include "Net/UnrealNetwork.h"

void AFortFeedbackManager::SuppressProceduralFeedback(TArray<AController*> ControllersToSuppress) {
}

AFortFeedbackManager* AFortFeedbackManager::GetFeedbackManager(UObject* WorldContextObject) {
    return NULL;
}

AFortPawn_FeedbackAnnouncer* AFortFeedbackManager::GetAnnouncerPawn(UObject* WorldContextObject) {
    return NULL;
}

void AFortFeedbackManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortFeedbackManager, Announcer);
    DOREPLIFETIME(AFortFeedbackManager, SuppressedControllers);
}

AFortFeedbackManager::AFortFeedbackManager() {
    bUsesStWFeedbackEvents = true;
    AnnouncerPawnClass = NULL;
    Announcer = NULL;
}

