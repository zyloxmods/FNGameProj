#include "FortLoginStatus.h"

void UFortLoginStatus::SetTitleText(const FText& TitleText) {
}

void UFortLoginStatus::SetLoginStatus(const FText& InLoginStatus) {
}

UFortLoginStatus::UFortLoginStatus() {
    this->Text_Title = NULL;
    this->Text_Status = NULL;
    this->Button_Status = NULL;
}

