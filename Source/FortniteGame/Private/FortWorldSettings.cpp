#include "FortWorldSettings.h"

AFortWorldSettings::AFortWorldSettings() {
    this->WorldCellsFlags = 0;
    this->bGenerateTestLevelSaves = false;
    this->bDisableCullDistance = false;
    this->bUseWorldSpecificCullDistanceOverride = false;
    this->bPvPUseWidgetRotation = true;
    this->bOverrideMainMapSettings = false;
    this->bValidateNavGraphConnectivity = false;
    this->bLimitNavGraphSkyCells = false;
    this->bUseProceduralFoliage = true;
    this->bUseConditionalBuildingFoundations = true;
    this->bAllowBuildingStreamingData = false;
    this->bShowTimeOfDayManager = true;
    this->MinCullObjectSize = 0.00f;
    this->MinCullDistance = 0.00f;
    this->MaxCullObjectSize = 0.00f;
    this->MaxCullDistance = 0.00f;
    this->TeamOnePvPMiniMapImage = NULL;
    this->TeamTwoPvPMiniMapImage = NULL;
    this->PvPMapWorldWidth = 0.00f;
    this->PvPMapWorldHeight = 0.00f;
    this->MapZOffset = 37500.00f;
    this->MapInitialMask = NULL;
    this->bSpawnVehicleManager = true;
    this->MapWorldScale = 160.00f;
    this->MiniMapZoom = 2.50f;
    this->SearchSpeedOverride = NULL;
    this->ResourceRateOverride = NULL;
    this->SoundBodyHeadshotRequired = NULL;
    this->bSpawnTimeOfDayManager = true;
    this->WorldMusicManagerBank = NULL;
    this->ZoneThemeMusicManagerBank = NULL;
    this->TimeOfDayManager = NULL;
    this->VehicleManager = NULL;
}

