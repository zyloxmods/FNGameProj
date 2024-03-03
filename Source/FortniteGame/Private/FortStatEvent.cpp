#include "FortStatEvent.h"

FFortStatEvent::FFortStatEvent() {
    this->RepeatType = EFortEventRepeat::EFER_Inactive;
    this->AnnouncementToDisplay = NULL;
    this->NotificationParameter = NULL;
    this->AssociatedStat = NULL;
    this->FPC = NULL;
}

