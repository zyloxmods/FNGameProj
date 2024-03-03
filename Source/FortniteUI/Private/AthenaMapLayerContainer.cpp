#include "AthenaMapLayerContainer.h"

void UAthenaMapLayerContainer::HandleNewContextualObjectives(const TArray<UFortQuestItem*>& ContextualQuests) {
}

UAthenaMapLayerContainer::UAthenaMapLayerContainer() {
    this->AthenaMapLayer = NULL;
    this->AthenaMapIconsOverlay_Main = NULL;
    this->ListView_NonLocationIconsBelowMap = NULL;
}

