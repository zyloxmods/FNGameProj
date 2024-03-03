#include "PlayerMarkerConfig.h"

FPlayerMarkerConfig::FPlayerMarkerConfig() {
    this->DoubleClickTime = 1;
    this->bShowMarkerDetailsWidget = false;
    this->bCreateMarkerActors = false;
    this->bCreateMarkerWidgets = false;
    this->bClampEnemyMarkers = false;
    this->bClampItemMarkers = false;
    this->bShowLocationMarkersOnCompass = false;
    this->LocalPlaceableMarkersPerRate = 0;
    this->LocalPlaceableMarkersRechargeRate = 1;
    this->RemotePlayableMarkerSoundsPerRate = 0;
    this->RemotePlayableMarkerSoundsRechargeRate = 0;
    this->RemotePlayableMarkerSoundsByPlayerIDPerRate = 0;
    this->RemotePlayableMarkerSoundsByPlayerIDRechargeRate = 0;
    this->RemotePlayableMarkerSoundsByPlayerIDRechargeRateCap = 0;
    this->EnableDoubleClickAction = false;
    this->EnableItemMarking = false;
    this->EnableInteractionMarking = false;
    this->ScreenPercentageDistanceToShowMarkerInfo = 1;
    this->EnemyMarkerTLL = 1;
    this->ItemMarkerTTL = 1;
    this->SpecialServerMarkerTTL = 1;
    this->EliminationMarkerTTL = 1;
    this->MaxItemMarkers = 0;
    this->MaxEnemyMarkers = 0;
    this->MaxEliminationMarkers = 0;
    this->MaxSpecialLocalMarkers = 0;
    this->MaxSpecialServerMarkers = 0;
}

