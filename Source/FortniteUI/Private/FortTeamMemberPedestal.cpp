#include "FortTeamMemberPedestal.h"
#include "Components/WidgetComponent.h"








bool AFortTeamMemberPedestal::IsValidTeamMember() const {
    return false;
}

bool AFortTeamMemberPedestal::IsPlayingFortnite() const {
    return false;
}

bool AFortTeamMemberPedestal::IsInLocalSquadGroup() const {
    return false;
}

bool AFortTeamMemberPedestal::IsInFrontEnd() const {
    return false;
}

bool AFortTeamMemberPedestal::IsCurrentMemberLocal() const {
    return false;
}

int32 AFortTeamMemberPedestal::GetCurrentTeamSize() const {
    return 0;
}

void AFortTeamMemberPedestal::ClearOverrideMaterial() {
}

void AFortTeamMemberPedestal::ApplyUniformOverrideMaterial(UMaterialInterface* OverrideMaterial) {
}

AFortTeamMemberPedestal::AFortTeamMemberPedestal() {
    this->OwningPedestalGroup = NULL;
    this->AssignedMemberIndex = -1;
    this->VisualOrderIdx = -1;
    this->WidgetComponent_MemberInfo = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent_MemberInfo"));
    this->WidgetComponent_FillOpenSlot = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent_FillOpenSlot"));
    this->WidgetComponent_BattlePassInfo = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent_BattlePassInfo"));
    this->MemberHeroItem = NULL;
}

