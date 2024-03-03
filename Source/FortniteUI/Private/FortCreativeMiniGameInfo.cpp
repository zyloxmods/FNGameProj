#include "FortCreativeMiniGameInfo.h"

void UFortCreativeMiniGameInfo::PushPanelInputComponent() {
}

void UFortCreativeMiniGameInfo::PopPanelInputComponent() {
}

void UFortCreativeMiniGameInfo::OnVisible() {
}



bool UFortCreativeMiniGameInfo::IsStartGameEnabled() const {
    return false;
}

TArray<FCreativeIslandDescriptionTag> UFortCreativeMiniGameInfo::GetIslandDescriptionTags() const {
    return TArray<FCreativeIslandDescriptionTag>();
}

bool UFortCreativeMiniGameInfo::ForceRefresh() {
    return false;
}

bool UFortCreativeMiniGameInfo::AreDetailsToggleable() const {
    return false;
}

UFortCreativeMiniGameInfo::UFortCreativeMiniGameInfo() : UUserWidget(FObjectInitializer::Get()) {
    this->Text_Name = NULL;
    this->Text_CreatorName = NULL;
    this->Text_SupportCode = NULL;
    this->Text_Bullet1 = NULL;
    this->Text_Bullet2 = NULL;
    this->Text_Bullet3 = NULL;
    this->SizeFont_Bullet_Mobile = 0;
    this->PanelInputComponent = NULL;
}

