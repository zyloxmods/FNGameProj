#include "GalileoWrapperWidget.h"
#include "FortAthenaMutator_SpecialEvent.h"


void UGalileoWrapperWidget::NativeOnResumeGame() {
}

UGalileoWrapperWidget::UGalileoWrapperWidget() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_SpecialEvent::StaticClass();
}

