#include "FortMaterialProgressBar.h"
#include "Templates/SubclassOf.h"

void UFortMaterialProgressBar::SetStyle(TSubclassOf<UFortMaterialProgressBarStyle> BarStyle) {
}

void UFortMaterialProgressBar::SetProgressBarSectionPercent(TEnumAsByte<EFortMaterialProgressBarSection::Type> BarSection, float Percent) {
}

void UFortMaterialProgressBar::SetProgressBarSectionColor(TEnumAsByte<EFortMaterialProgressBarSection::Type> BarSection, FLinearColor Color, EFortMaterialProgressBarSectionColorNumber ColorNumber) {
}

void UFortMaterialProgressBar::SetBackgroundColor(FLinearColor Color) {
}

UFortMaterialProgressBar::UFortMaterialProgressBar() {
    this->Style = NULL;
    this->BackgroundColorParamName = TEXT("Background");
    this->OverflowBehavior = EFortMaterialProgressBarSectionOverflowBehavior::PreserveValues;
    this->ProgressBar = NULL;
    this->ProgressBarMID = NULL;
}

