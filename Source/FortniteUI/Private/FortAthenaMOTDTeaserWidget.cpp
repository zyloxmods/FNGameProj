#include "FortAthenaMOTDTeaserWidget.h"


void UFortAthenaMOTDTeaserWidget::OpenMOTDScreen(int32 FocusedNewsIndex) {
}



int32 UFortAthenaMOTDTeaserWidget::GetNewsCount() const {
    return 0;
}

FAthenaNewsEntry UFortAthenaMOTDTeaserWidget::GetNewsByIndex(int32 Index) const {
    return FAthenaNewsEntry{};
}

UFortAthenaMOTDTeaserWidget::UFortAthenaMOTDTeaserWidget() {
    this->MOTDWidgetClass = NULL;
    this->MOTDSimpleNewsWidgetClass = NULL;
    this->FortAthenaMOTDTileListView = NULL;
}

