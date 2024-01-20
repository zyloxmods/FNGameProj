#include "PlayerMarkerConfig.h"

FPlayerMarkerConfig::FPlayerMarkerConfig() {
    this->DoubleClickTime = 0.00f;
    this->bShowMarkerDetailsWidget = false;
    this->bCreateMarkerActors = false;
    this->bCreateMarkerWidgets = false;
    this->bClampEnemyMarkers = false;
    this->bClampItemMarkers = false;
    this->bShowLocationMarkersOnCompass = false;
    this->LocalPlaceableMarkersPerRate = 0;
    this->LocalPlaceableMarkersRechargeRate = 0.00f;
    this->RemotePlayableMarkerSoundsPerRate = 0;
    this->RemotePlayableMarkerSoundsRechargeRate = 0;
    this->EnableDoubleClickAction = false;
    this->EnableItemMarking = false;
    this->EnableInteractionMarking = false;
    this->ScreenPercentageDistanceToShowMarkerInfo = 0.00f;
    this->EnemyMarkerTLL = 0.00f;
    this->ItemMarkerTTL = 0.00f;
    this->MaxItemMarkers = 0;
    this->MaxEnemyMarkers = 0;
}

