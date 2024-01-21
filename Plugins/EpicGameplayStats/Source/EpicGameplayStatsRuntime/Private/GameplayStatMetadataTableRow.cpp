#include "GameplayStatMetadataTableRow.h"

FGameplayStatMetadataTableRow::FGameplayStatMetadataTableRow() {
    this->Metric = EEpicLeaderboardUpdateFunction::Min;
    this->DataType = EEpicLeaderboardDataType::Integer;
    this->bPublish = false;
    this->WeeklyRefreshInterval = 0;
    this->bExportToBackEnd = false;
    this->bShowInFrontEnd = false;
}

