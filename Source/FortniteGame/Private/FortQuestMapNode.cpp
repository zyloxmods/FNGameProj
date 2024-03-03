#include "FortQuestMapNode.h"

FFortQuestMapNode::FFortQuestMapNode() {
    this->QuestItemDefinition = NULL;
    this->NodeType = EFortQuestMapNodeType::MandatoryQuest;
    this->LabelPosition = EFortQuestMapNodeLabelPosition::Top;
    this->UseHighContrastMode = false;
}

