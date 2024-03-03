#include "AthenaXPFeedWidgetEntry.h"



void UAthenaXPFeedWidgetEntry::CloseWidget() {
}

UAthenaXPFeedWidgetEntry::UAthenaXPFeedWidgetEntry() : UUserWidget(FObjectInitializer::Get()) {
    this->RelatedXPFeed = NULL;
}

