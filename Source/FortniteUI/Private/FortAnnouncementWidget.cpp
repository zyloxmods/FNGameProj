#include "FortAnnouncementWidget.h"


FText UFortAnnouncementWidget::GetTextForAction(const FName ActionName) const {
    return FText::GetEmpty();
}

FName UFortAnnouncementWidget::FindFirstUnboundAction(FText AnnouncementBody) {
    return NAME_None;
}

void UFortAnnouncementWidget::BindUpdateEvents(AFortClientAnnouncement* Announcement) {
}


UFortAnnouncementWidget::UFortAnnouncementWidget() {
    this->BoundAnnouncement = NULL;
}

