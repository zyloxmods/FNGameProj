#include "FortAthenaTutorial_Ambush.h"


void AFortAthenaTutorial_Ambush::OnBeginOverlapAmbushTriggerBox(AActor* OverlappedActor, AActor* OtherActor) {
}

void AFortAthenaTutorial_Ambush::HandleOnPlayerDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaTutorial_Ambush::HandleOnAIDummyDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

AFortAthenaTutorial_Ambush::AFortAthenaTutorial_Ambush() {
    ReachAmbushLocationMarker = NULL;
    AmbushTriggerBox = NULL;
    HealItemSpawnerBlueprint = NULL;
    ShieldItemSpawnerBlueprint = NULL;
    BlockerAmbush = NULL;
    AmbushDirectionArrows = NULL;
    AmbushCameraPoint = NULL;
    AISpawnerAttachedTo = NULL;
    SpawnedAIPawn = NULL;
    AiAccuracyRadius = 1;
    AiRateOfFire = 1;
    AiFirstShotDamage = 1;
    AiDamage = 1;
    MaxLocationErrorKeyName = TEXT("MaxLocationError");
    MaxLocationErrorValue = 1;
    MinLocationErrorKeyName = TEXT("MinLocationError");
    MinLocationErrorValue = 1;
    BotController = NULL;
    AmbushCameraInSpeed = 1;
    AmbushCameraOutSpeed = 1;
}

