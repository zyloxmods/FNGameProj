#include "FortStatEvent.h"

FFortStatEvent::FFortStatEvent() {
    RepeatType = EFortEventRepeat::EFER_Inactive;
    AnnouncementToDisplay = NULL;
    NotificationParameter = NULL;
    AssociatedStat = NULL;
    FPC = NULL;
}

