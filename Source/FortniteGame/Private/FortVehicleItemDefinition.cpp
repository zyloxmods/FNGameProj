#include "FortVehicleItemDefinition.h"

UFortVehicleItemDefinition::UFortVehicleItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    WrapPreviewSectionMask = 0;
    bUseInWrapPreviewList = false;
    ItemType = EFortItemType::Vehicle;
}

