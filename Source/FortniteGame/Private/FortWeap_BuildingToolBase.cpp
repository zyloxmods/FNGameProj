#include "FortWeap_BuildingToolBase.h"
#include "Components/StaticMeshComponent.h"

UStaticMeshComponent* AFortWeap_BuildingToolBase::GetPencilMeshComponent() const {
    return NULL;
}

AFortWeap_BuildingToolBase::AFortWeap_BuildingToolBase() {
    PencilMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PencilMeshComponent0"));
    InstigatorController = NULL;
    InstigatorBotController = NULL;
}

