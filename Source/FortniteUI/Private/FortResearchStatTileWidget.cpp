#include "FortResearchStatTileWidget.h"


bool UFortResearchStatTileWidget::IsAtMaxResearchLevel() const {
    return false;
}

FString UFortResearchStatTileWidget::GetStatIdName() const {
    return TEXT("");
}

EFortStatType UFortResearchStatTileWidget::GetPersonalStatType() const {
    return EFortStatType::Fortitude;
}

int32 UFortResearchStatTileWidget::GetNextTeamStatValueDelta() const {
    return 0;
}

int32 UFortResearchStatTileWidget::GetNextPersonalStatValueDelta() const {
    return 0;
}

int32 UFortResearchStatTileWidget::GetNextCombinedStatValueDelta() const {
    return 0;
}

int32 UFortResearchStatTileWidget::GetCurrentTeamStatValue() const {
    return 0;
}

int32 UFortResearchStatTileWidget::GetCurrentResearchLevel() const {
    return 0;
}

int32 UFortResearchStatTileWidget::GetCurrentPersonalStatValue() const {
    return 0;
}

int32 UFortResearchStatTileWidget::GetCurrentCombinedStatValue() const {
    return 0;
}

int32 UFortResearchStatTileWidget::GetCostToIncreaseStat() const {
    return 0;
}

UFortResearchStatTileWidget::UFortResearchStatTileWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PersonalStatItemDefinition = NULL;
    this->TeamStatItemDefinition = NULL;
}

