#include "FortErrorWindow.h"

void UFortErrorWindow::PutErrorEntries(TArray<UCommonUserWidget*>& ErrorEntries) {
}

UCommonUserWidget* UFortErrorWindow::GetErrorEntry() {
    return NULL;
}

void UFortErrorWindow::DismissErrors(TArray<FFortErrorInfo> ErrorInfos) {
}

UFortErrorWindow::UFortErrorWindow() {
    this->ErrorEntryClass = NULL;
}

