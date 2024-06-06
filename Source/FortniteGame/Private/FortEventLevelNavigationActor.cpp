#include "FortEventLevelNavigationActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"

void AFortEventLevelNavigationActor::UpdateBangState(FGameplayTag BangTacker, bool bShowBang) {
}



bool AFortEventLevelNavigationActor::HasPurchasedSeasonBook() const {
    return false;
}


void AFortEventLevelNavigationActor::HandleMCPInventoryChanged(const TSet<FString>& TypesChanged, int64 ProfileRvn) {
}

void AFortEventLevelNavigationActor::HandleDisplayMeshInputTouchEnd(TEnumAsByte<ETouchIndex::Type> FingerIndex, UPrimitiveComponent* TouchedComponent) {
}

void AFortEventLevelNavigationActor::HandleDisplayMeshEndCursorOver(UPrimitiveComponent* TouchedComponent) {
}

void AFortEventLevelNavigationActor::HandleDisplayMeshClicked(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed) {
}

void AFortEventLevelNavigationActor::HandleDisplayMeshBeginCursorOver(UPrimitiveComponent* TouchedComponent) {
}

UFortGameStateComponent_EventLevel* AFortEventLevelNavigationActor::GetOwningGameStateComp() const {
    return NULL;
}

FFortEventLevelNavigationDisplayDetails AFortEventLevelNavigationActor::GetDisplayDetails() const {
    return FFortEventLevelNavigationDisplayDetails{};
}

bool AFortEventLevelNavigationActor::CanCommitNavigationRequest_Implementation() const {
    return false;
}

AFortEventLevelNavigationActor::AFortEventLevelNavigationActor() {
    WidgetComponent_NavigationWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent_NavWidget"));
    WidgetComponent_CursorTargetPosition = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent_CursorTargetPosition"));
    IndicatorWidgetClass = NULL;
    CursorTargetWidgetClass = NULL;
    DisplayMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    bAutoClick = false;
    bAlwaysHighliteOnMobile = false;
    MobileHighlightStencilValue = 0;
    bOverrideMobileMeshSize = false;
    MeshSizeOverrideScale = 1;
    CursorHoverHighlightStencilValue = 0;
}

