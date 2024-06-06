#include "BuildingProp_CaptureArea.h"
#include "CaptureComponent.h"

void ABuildingProp_CaptureArea::UnregisterPlayerInsideArea(AFortPlayerController* OldPlayerInside) {
}

void ABuildingProp_CaptureArea::UnregisterAllRegisteredPlayerInsideArea() {
}

void ABuildingProp_CaptureArea::UnbindToControllerInventoryChangedEvent(AFortPlayerController* PlayerController) {
}

void ABuildingProp_CaptureArea::UnbindAllControllersToInventoryChangedEvent() {
}

void ABuildingProp_CaptureArea::RemoveItemsFromPlayer(const TArray<UFortWorldItemDefinition*>& ItemsToCapture, AFortPlayerController* PlayerController) {
}

void ABuildingProp_CaptureArea::RegisterPlayerInsideArea(AFortPlayerController* PlayerInside) {
}


void ABuildingProp_CaptureArea::OnPlayerChangedTeam(AFortPlayerState* PlayerState, uint8 NewTeam, uint8 OldTeam, bool bTeamChangedWithoutRespawn) {
}



void ABuildingProp_CaptureArea::OnFortPawnRegisteredInsideAreaDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}


int32 ABuildingProp_CaptureArea::CaptureItemsFromPlayer(bool bRemoveOnFound, const TArray<UFortWorldItemDefinition*>& ItemsToCapture, AFortPlayerController* PlayerController, int32 AmountToRemove, int32& AddedScore) {
    return 0;
}

int32 ABuildingProp_CaptureArea::CaptureItemsFromPickup(const TArray<UFortWorldItemDefinition*>& ItemsToCapture, AFortPickup* Pickup, int32& AddedScore) {
    return 0;
}


void ABuildingProp_CaptureArea::BindToControllerInventoryChangedEvent(AFortPlayerController* PlayerController) {
}

void ABuildingProp_CaptureArea::BindOrUnbindOnPlayerTeamReplicated(AFortPlayerState* PlayerState, bool bBind) {
}

ABuildingProp_CaptureArea::ABuildingProp_CaptureArea() {
    CaptureComponent = CreateDefaultSubobject<UCaptureComponent>(TEXT("CaptureComponent"));
}

