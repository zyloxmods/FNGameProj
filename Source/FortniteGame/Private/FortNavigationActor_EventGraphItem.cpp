#include "FortNavigationActor_EventGraphItem.h"


FGameplayTag AFortNavigationActor_EventGraphItem::GetNodeTag() {
    return FGameplayTag{};
}

void AFortNavigationActor_EventGraphItem::CosmeticVariantAssets_PostLoad() {
}

AFortNavigationActor_EventGraphItem::AFortNavigationActor_EventGraphItem() {
    this->RewardGraphToReprisent = NULL;
    this->bInitializedCalled = false;
    this->CanNavigateToWhenClaimed = true;
}

