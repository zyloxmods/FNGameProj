#include "PlayerMarkerConfig.h"

FPlayerMarkerConfig::FPlayerMarkerConfig() {
    DoubleClickTime = 1;
    bShowMarkerDetailsWidget = false;
    bCreateMarkerActors = false;
    bCreateMarkerWidgets = false;
    bClampEnemyMarkers = false;
    bClampItemMarkers = false;
    bShowLocationMarkersOnCompass = false;
    LocalPlaceableMarkersPerRate = 0;
    LocalPlaceableMarkersRechargeRate = 1;
    RemotePlayableMarkerSoundsPerRate = 0;
    RemotePlayableMarkerSoundsRechargeRate = 0;
    RemotePlayableMarkerSoundsByPlayerIDPerRate = 0;
    RemotePlayableMarkerSoundsByPlayerIDRechargeRate = 0;
    RemotePlayableMarkerSoundsByPlayerIDRechargeRateCap = 0;
    EnableDoubleClickAction = false;
    EnableItemMarking = false;
    EnableInteractionMarking = false;
    ScreenPercentageDistanceToShowMarkerInfo = 1;
    EnemyMarkerTLL = 1;
    ItemMarkerTTL = 1;
    SpecialServerMarkerTTL = 1;
    EliminationMarkerTTL = 1;
    MaxItemMarkers = 0;
    MaxEnemyMarkers = 0;
    MaxEliminationMarkers = 0;
    MaxSpecialLocalMarkers = 0;
    MaxSpecialServerMarkers = 0;
}

