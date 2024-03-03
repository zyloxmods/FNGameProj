#include "FortPhysicsObjectPreset.h"

UFortPhysicsObjectPreset::UFortPhysicsObjectPreset() {
    this->NetworkPolicy = EFortPhysicsObjectNetworkPolicy::ClientOnly;
    this->bIsAffectedByPlayerMovement = true;
    this->bCanAffectPlayerMovement = false;
    this->bCanInteractWithVehicles = false;
    this->bCanInteractWithWater = false;
    this->bImpulseOnPlayerInteraction = false;
    this->DefaultPontoonRadius = 1;
    this->MinTimeInWaterToSink = 1;
    this->MaxTimeInWaterToSink = 1;
    this->PlayerImpulseMagnitude = 1;
    this->bStartAwake = true;
    this->bOverrideLinearDamping = false;
    this->bOverrideAngularDamping = false;
    this->bOverrideMassKg = false;
    this->bOverrideMassScale = false;
    this->bOverrideGravity = false;
    this->bShouldImpulseOnDamage = false;
    this->bShouldEnableTick = false;
    this->LinearDampingOverride = 1;
    this->AngularDampingOverride = 1;
    this->MassKgOverride = 1;
    this->MassScaleOverride = 1;
    this->GravityOverride = 1;
    this->MinHitImpulseForNotify = 1;
    this->DamageImpulseMultiplier = 1;
    this->MinDamageToImpulse = 1;
    this->PhysicalMaterialOverride = NULL;
    this->EffectsData = NULL;
}

