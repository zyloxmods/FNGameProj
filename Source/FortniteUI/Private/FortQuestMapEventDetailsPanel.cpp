#include "FortQuestMapEventDetailsPanel.h"

UFortQuestMapEventDetailsPanel::UFortQuestMapEventDetailsPanel() {
    this->CurrentQuestBorder = NULL;
    this->CompletedQuestBorder = NULL;
    this->FutureQuestBorder = NULL;
    this->VBox_QuestContainer = NULL;
    this->VBox_CompletedQuestContainer = NULL;
    this->Switcher_Quests = NULL;
    this->Border_NextQuest = NULL;
    this->Text_QuestName = NULL;
    this->Text_QuestDescription = NULL;
    this->Text_Title = NULL;
    this->List_Tasks = NULL;
    this->Image_QuestIcon = NULL;
    this->ScrollBox_SideBar = NULL;
    this->EventQuestTable = NULL;
    this->SideBarEntryClass = NULL;
    this->UnlockEventQuestDefinition = NULL;
    this->CurrentQuestDef = NULL;
}

