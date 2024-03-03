#include "AthenaSpecialEventStartedOverlay.h"



void UAthenaSpecialEventStartedOverlay::HandleSpecialEventStarted(float TotalEventTime, float TimeRemaining, bool bIsAttacker, const FText& EventDescription) {
}

void UAthenaSpecialEventStartedOverlay::HandleDisplayDynamicQuestUpdate(const UFortQuestObjectiveInfo* QuestObjective, bool DisplayStatusUpdate, bool DisplayAnnouncementUpdate) {
}

float UAthenaSpecialEventStartedOverlay::GetOutroDelay() const {
    return 0.0f;
}

UAthenaSpecialEventStartedOverlay::UAthenaSpecialEventStartedOverlay() {
    this->RichText_Title = NULL;
}

