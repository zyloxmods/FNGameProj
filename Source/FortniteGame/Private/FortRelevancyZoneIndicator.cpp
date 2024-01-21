#include "FortRelevancyZoneIndicator.h"
#include "Components/StaticMeshComponent.h"

AFortRelevancyZoneIndicator::AFortRelevancyZoneIndicator() {
    this->RelevancyZoneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RelevancyZoneMesh"));
    this->CustomDepthMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CustomDepthMesh"));
    this->RelevancyZoneToWorldScale = 1.00f;
    this->MiniMapNetRelevancyOverlayMaterial = NULL;
    this->MiniMapNetRelevancyCircleMaterial = NULL;
    this->MinimapNetRelevancyOverlayMID = NULL;
    this->MinimapNetRelevancyCircleMID = NULL;
}

