#include "FortAsyncAction_ShowPartyDialog.h"

UFortAsyncAction_ShowPartyDialog* UFortAsyncAction_ShowPartyDialog::ShowPartyMemberManageDialog(UObject* InWorldContextObject, const FFortTeamMemberInfo& NewTeamMemberInfo, ULocalPlayer* NewLocalPlayer, UUserWidget* LeftAdditionalContent) {
    return NULL;
}

UFortAsyncAction_ShowPartyDialog* UFortAsyncAction_ShowPartyDialog::ShowPartyLeaderManageDialog(UObject* InWorldContextObject, const FFortTeamMemberInfo& NewTeamMemberInfo, ULocalPlayer* NewLocalPlayer, UUserWidget* LeftAdditionalContent) {
    return NULL;
}

UFortAsyncAction_ShowPartyDialog::UFortAsyncAction_ShowPartyDialog() {
    this->WorldContextObject = NULL;
    this->LocalPlayer = NULL;
}

