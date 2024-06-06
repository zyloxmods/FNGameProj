#include "FortWorldSettings.h"

AFortWorldSettings::AFortWorldSettings() {
    WorldCellsFlags = 0;
    bGenerateTestLevelSaves = false;
    bDisableCullDistance = false;
    bUseWorldSpecificCullDistanceOverride = false;
    bPvPUseWidgetRotation = true;
    bOverrideMainMapSettings = false;
    bValidateNavGraphConnectivity = false;
    bLimitNavGraphSkyCells = false;
    bUseProceduralFoliage = true;
    bUseConditionalBuildingFoundations = true;
    bAllowBuildingStreamingData = false;
    SplineHLODIndex = 0;
    bShowTimeOfDayManager = true;
    MinCullObjectSize = 1;
    MinCullDistance = 1;
    MaxCullObjectSize = 1;
    MaxCullDistance = 1;
    OverrideMinimapMaterial = NULL;
    MapZOffset = 1;
    MapInitialMask = NULL;
    bSpawnVehicleManager = true;
    MapWorldScale = 1;
    MiniMapZoom = 1;
    SearchSpeedOverride = NULL;
    ResourceRateOverride = NULL;
    SoundBodyHeadshotRequired = NULL;
    bSpawnTimeOfDayManager = true;
    WorldMusicManagerBank = NULL;
    ZoneThemeMusicManagerBank = NULL;
    TimeOfDayManager = NULL;
    VehicleManager = NULL;
    LevelOverlayManager = NULL;
}

