#include "FortGridWidgetBase.h"
#include "Templates/SubclassOf.h"

void UFortGridWidgetBase::SetTileWidth(float Width) {
}

void UFortGridWidgetBase::SetTilesDown(int32 Down) {
}

void UFortGridWidgetBase::SetTilesAcross(int32 Across) {
}

void UFortGridWidgetBase::SetTilePadding(FMargin Padding) {
}

void UFortGridWidgetBase::SetTileHeight(float Height) {
}

void UFortGridWidgetBase::SetPeekOverflowTilePercentage(float Percent) {
}

void UFortGridWidgetBase::SetDataProvider(const TArray<UObject*>& Data) {
}

void UFortGridWidgetBase::SetClearWidgetType(TSubclassOf<UFortGridPickerTile> InClearWidgetType) {
}

TArray<UFortGridPickerTile*> UFortGridWidgetBase::GetTiles() {
    return TArray<UFortGridPickerTile*>();
}

UFortGridPickerTile* UFortGridWidgetBase::GetTileForObject(const UObject* Object) {
    return NULL;
}

UFortGridWidgetBase::UFortGridWidgetBase() {
    this->ClearWidgetType = NULL;
    this->TileWidth = 80.00f;
    this->TileHeight = 80.00f;
    this->TilesAcross = 4;
    this->TilesDown = 3;
    this->bShrinkToFit = false;
    this->PeekOverflowTilePercentage = 50.00f;
    this->TileWidgetType = NULL;
    this->SortKind = EGridSortKind::None;
    this->bReversed = false;
}

