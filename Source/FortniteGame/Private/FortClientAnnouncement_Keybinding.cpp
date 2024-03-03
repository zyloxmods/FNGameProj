#include "FortClientAnnouncement_Keybinding.h"
#include "Net/UnrealNetwork.h"

void AFortClientAnnouncement_Keybinding::SetTitleText(FText TitleText) {
}

void AFortClientAnnouncement_Keybinding::SetIcon(FSlateBrush& Icon) {
}

void AFortClientAnnouncement_Keybinding::SetDisplayTime(float DisplayTime) {
}

void AFortClientAnnouncement_Keybinding::SetDetailText(FText DetailText) {
}

void AFortClientAnnouncement_Keybinding::ResetGamepadActionTextPairList() {
}

void AFortClientAnnouncement_Keybinding::OnRep_KeybindingData(const FFortClientAnnouncementData_Keybinding& PreviousKeybindingData) {
}

void AFortClientAnnouncement_Keybinding::AddGamepadActionTextPair(FActionTextPair Pair) {
}

void AFortClientAnnouncement_Keybinding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortClientAnnouncement_Keybinding, KeybindingData);
}

AFortClientAnnouncement_Keybinding::AFortClientAnnouncement_Keybinding() {
}

