#include "FortAthenaTutorial_Ambush.h"


void AFortAthenaTutorial_Ambush::OnBeginOverlapAmbushTriggerBox(AActor* OverlappedActor, AActor* OtherActor) {
}

void AFortAthenaTutorial_Ambush::HandleOnPlayerDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaTutorial_Ambush::HandleOnAIDummyDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

AFortAthenaTutorial_Ambush::AFortAthenaTutorial_Ambush() {
    this->ReachAmbushLocationMarker = NULL;
    this->AmbushTriggerBox = NULL;
    this->HealItemSpawnerBlueprint = NULL;
    this->ShieldItemSpawnerBlueprint = NULL;
    this->BlockerAmbush = NULL;
    this->AmbushDirectionArrows = NULL;
    this->AmbushCameraPoint = NULL;
    this->AISpawnerAttachedTo = NULL;
    this->SpawnedAIPawn = NULL;
    this->AiAccuracyRadius = 1;
    this->AiRateOfFire = 1;
    this->AiFirstShotDamage = 1;
    this->AiDamage = 1;
    this->MaxLocationErrorKeyName = TEXT("MaxLocationError");
    this->MaxLocationErrorValue = 1;
    this->MinLocationErrorKeyName = TEXT("MinLocationError");
    this->MinLocationErrorValue = 1;
    this->BotController = NULL;
    this->AmbushCameraInSpeed = 1;
    this->AmbushCameraOutSpeed = 1;
}

