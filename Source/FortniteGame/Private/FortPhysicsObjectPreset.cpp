#include "FortPhysicsObjectPreset.h"

UFortPhysicsObjectPreset::UFortPhysicsObjectPreset() {
    NetworkPolicy = EFortPhysicsObjectNetworkPolicy::ClientOnly;
    bIsAffectedByPlayerMovement = true;
    bCanAffectPlayerMovement = false;
    bCanInteractWithVehicles = false;
    bCanInteractWithWater = false;
    bImpulseOnPlayerInteraction = false;
    DefaultPontoonRadius = 1;
    MinTimeInWaterToSink = 1;
    MaxTimeInWaterToSink = 1;
    PlayerImpulseMagnitude = 1;
    bStartAwake = true;
    bOverrideLinearDamping = false;
    bOverrideAngularDamping = false;
    bOverrideMassKg = false;
    bOverrideMassScale = false;
    bOverrideGravity = false;
    bShouldImpulseOnDamage = false;
    bShouldEnableTick = false;
    LinearDampingOverride = 1;
    AngularDampingOverride = 1;
    MassKgOverride = 1;
    MassScaleOverride = 1;
    GravityOverride = 1;
    MinHitImpulseForNotify = 1;
    DamageImpulseMultiplier = 1;
    MinDamageToImpulse = 1;
    PhysicalMaterialOverride = NULL;
    EffectsData = NULL;
}

