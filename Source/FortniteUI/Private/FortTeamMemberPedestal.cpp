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

void AFortTeamMemberPedestal::InitializePlaceholderMesh(UStaticMeshComponent* NewPlaceholderMesh) {
}

void AFortTeamMemberPedestal::HandlePlaceholderMeshInputTouchEnd(TEnumAsByte<ETouchIndex::Type> FingerIndex, UPrimitiveComponent* TouchedComponent) {
}

void AFortTeamMemberPedestal::HandlePlaceholderMeshEndCursorOver(UPrimitiveComponent* TouchedComponent) {
}

void AFortTeamMemberPedestal::HandlePlaceholderMeshClicked(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed) {
}

void AFortTeamMemberPedestal::HandlePlaceholderMeshBeginCursorOver(UPrimitiveComponent* TouchedComponent) {
}

FString AFortTeamMemberPedestal::GetTeamMemberDisplayName() const {
    return TEXT("");
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
    this->AssignedMemberIndex = 0;
    this->VisualOrderIndex = 0;
    this->WidgetComponent_MemberInfo = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent_MemberInfo"));
    this->WidgetComponent_FillOpenSlot = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent_FillOpenSlot"));
    this->WidgetComponent_BattlePassInfo = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent_BattlePassInfo"));
    this->WidgetComponent_CompletedFeatInfo = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent_CompletedFeatInfo"));
    this->PlaceholderMesh = NULL;
    this->MemberHeroItem = NULL;
    this->LocalLoadoutFailureTimeout = 1;
    this->bTimeToPawnLoadedEnabled = true;
}

