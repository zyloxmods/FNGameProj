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
    this->SplineHLODIndex = 0;
    this->bShowTimeOfDayManager = true;
    this->MinCullObjectSize = 1;
    this->MinCullDistance = 1;
    this->MaxCullObjectSize = 1;
    this->MaxCullDistance = 1;
    this->OverrideMinimapMaterial = NULL;
    this->MapZOffset = 1;
    this->MapInitialMask = NULL;
    this->bSpawnVehicleManager = true;
    this->MapWorldScale = 1;
    this->MiniMapZoom = 1;
    this->SearchSpeedOverride = NULL;
    this->ResourceRateOverride = NULL;
    this->SoundBodyHeadshotRequired = NULL;
    this->bSpawnTimeOfDayManager = true;
    this->WorldMusicManagerBank = NULL;
    this->ZoneThemeMusicManagerBank = NULL;
    this->TimeOfDayManager = NULL;
    this->VehicleManager = NULL;
    this->LevelOverlayManager = NULL;
}

