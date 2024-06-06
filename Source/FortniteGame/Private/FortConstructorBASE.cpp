#include "FortConstructorBASE.h"






void AFortConstructorBASE::OnNeighborEndPlay(AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AFortConstructorBASE::OnNeighborDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortConstructorBASE::OnBasePawnDied(AFortPawn* Pawn) {
}

void AFortConstructorBASE::OnBasePawnDestroyed(AFortPawn* Pawn) {
}

void AFortConstructorBASE::OnBaseCollisionUnTouched(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFortConstructorBASE::OnBaseCollisionTouched(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFortConstructorBASE::GetResourceAmountsBasedOnUpgradeTier(int32 TierOneUpgradeAmount, int32 TierTwoUpgradeAmount, int32 TierThreeUpgradeAmount, int32& WoodResult, int32& StoneResult, int32& MetalResult) {
}

TArray<ABuildingSMActor*> AFortConstructorBASE::GetBuildingActorsInBase() {
    return TArray<ABuildingSMActor*>();
}

void AFortConstructorBASE::AddNeighborToBaseOnFinishedConstruction(ABuildingSMActor* PlaceOn) {
}

AFortConstructorBASE::AFortConstructorBASE() {
    NodesToAffect = 0;
    BaseLevel = 0;
    DamageAttributeSet = NULL;
}

