#include "FortQuestMapNode.h"

FFortQuestMapNode::FFortQuestMapNode() {
    QuestItemDefinition = NULL;
    NodeType = EFortQuestMapNodeType::MandatoryQuest;
    LabelPosition = EFortQuestMapNodeLabelPosition::Top;
    UseHighContrastMode = false;
}

