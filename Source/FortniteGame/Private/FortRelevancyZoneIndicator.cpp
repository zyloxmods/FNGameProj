#include "FortRelevancyZoneIndicator.h"
#include "Components/StaticMeshComponent.h"

AFortRelevancyZoneIndicator::AFortRelevancyZoneIndicator() {
    RelevancyZoneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RelevancyZoneMesh"));
    CustomDepthMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CustomDepthMesh"));
    RelevancyZoneToWorldScale = 1;
    MiniMapNetRelevancyOverlayMaterial = NULL;
    MiniMapNetRelevancyCircleMaterial = NULL;
    MinimapNetRelevancyOverlayMID = NULL;
    MinimapNetRelevancyCircleMID = NULL;
}

