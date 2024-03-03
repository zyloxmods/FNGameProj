#include "FortCreativeIslandGeneration.h"

void UFortCreativeIslandGeneration::TemplateIslandsOnHoveredItemChanged(UObject* Item, bool bIsHovered) {
}

void UFortCreativeIslandGeneration::TemplateIslandsOnCurrentItemSelectionChanged(UObject* Item) {
}

void UFortCreativeIslandGeneration::StartingIslandsOnHoveredItemChanged(UObject* Item, bool bIsHovered) {
}

void UFortCreativeIslandGeneration::StartingIslandsOnCurrentItemSelectionChanged(UObject* Item) {
}

void UFortCreativeIslandGeneration::SetupIslandTemplateData() {
}



void UFortCreativeIslandGeneration::HandleCancelClicked_Implementation() {
}

bool UFortCreativeIslandGeneration::GetShowTemplateIslands() {
    return false;
}

UFortCreativeIslandGeneration::UFortCreativeIslandGeneration() {
    this->StartingIslandsTileView = NULL;
    this->TemplateIslandsTileView = NULL;
    this->AcceptButton = NULL;
    this->IslandTemplateNameText = NULL;
    this->IslandDescriptionText = NULL;
    this->PublishedIslandName = NULL;
    this->PublishedIslandCode = NULL;
    this->PublishedIslandAuthor = NULL;
    this->PublishedIslandBulletOne = NULL;
    this->PublishedIslandBulletTwo = NULL;
    this->PublishedIslandBulletThree = NULL;
    this->TabButtonGroup = NULL;
}

