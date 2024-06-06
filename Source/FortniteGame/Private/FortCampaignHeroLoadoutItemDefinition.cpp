#include "FortCampaignHeroLoadoutItemDefinition.h"

TArray<FFortCrewSlotInformation> UFortCampaignHeroLoadoutItemDefinition::GetSlots() const {
    return TArray<FFortCrewSlotInformation>();
}

int32 UFortCampaignHeroLoadoutItemDefinition::GetSlotIndexByName(const FName SlotName) const {
    return 0;
}

FFortCrewSlotInformation UFortCampaignHeroLoadoutItemDefinition::GetCommanderSlot() const {
    return FFortCrewSlotInformation{};
}

UFortCampaignHeroLoadoutItemDefinition::UFortCampaignHeroLoadoutItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    GadgetSlotsAllowed = 0;
}

