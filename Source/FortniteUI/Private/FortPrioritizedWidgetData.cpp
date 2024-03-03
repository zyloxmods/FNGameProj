#include "FortPrioritizedWidgetData.h"

FFortPrioritizedWidgetData::FFortPrioritizedWidgetData() {
    this->Priority = EFortPrioritizedWidgetPriority::Priority_0;
    this->WhenContesting = EFortPrioritizedWidgetContestedBehavior::QueueBehind;
}

