#include "FortAlterationWidget.h"

void UFortAlterationWidget::Setup(UFortAlterationInfo* InAlterationInfo) {
}


UFortAlterationInfo* UFortAlterationWidget::GetAlterationInfo() const {
    return NULL;
}

UFortAlterationWidget::UFortAlterationWidget() {
    this->MaxPipCount = 1;
    this->AlterationInfo = NULL;
}

