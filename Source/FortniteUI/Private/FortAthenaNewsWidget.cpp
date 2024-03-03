#include "FortAthenaNewsWidget.h"



void UFortAthenaNewsWidget::PlayNewsTilesIntro() {
}

void UFortAthenaNewsWidget::LogMotDLobbyNavAction() {
}

void UFortAthenaNewsWidget::LogMotDCloseAction() {
}


UFortAthenaNewsWidget::UFortAthenaNewsWidget() {
    this->NewsTileClass = NULL;
    this->SpotlightNewsTileClass = NULL;
    this->SpecialEventNewsTileClass = NULL;
    this->SpotlightSpecialEventNewsTileClass = NULL;
    this->SpecialEvent2NewsTileClass = NULL;
    this->SpotlightSpecialEvent2NewsTileClass = NULL;
    this->CommonText_NewsHeader = NULL;
    this->ScrollBox_NewsContainer = NULL;
    this->HorizontalBox_NewsContainer = NULL;
    this->VerticalBox_SpotlightNewsContainer = NULL;
}

