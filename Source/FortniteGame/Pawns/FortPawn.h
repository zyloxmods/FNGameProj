// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameplayTagContainer.h"
#include "Engine/EngineTypes.h"
#include "../Enum/EFortFootstepSurfaceType.h"
#include "../Enum/EFortControlRecoveryBehavior.h"
#include "../Enum/EFortMovementStyle.h"
#include "../Enum/EFortPawnPushSize.h"
#include "Engine/DataTable.h"
#include "Components/FortStormShieldComponent.h"
#include "GameplayCueInterface.h"
#include "Components/FortMovementSet.h"
#include "Components/FortAdvancedMovementSet.h"
#include "../ItemDef/FortItemDefinition.h"
#include "FortPawn.generated.h"

UCLASS(BlueprintType)
class AFortPawn : public ACharacter
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		bool bUseBaseChanged;

	UPROPERTY(EditAnywhere)
		bool bIgnoreNextFallingDamage;

	UPROPERTY(EditAnywhere)
		bool bIsDying;

	UPROPERTY(EditAnywhere)
		bool bPlayedDying;

	UPROPERTY(EditAnywhere)
		bool bIsHiddenForDeath;

	UPROPERTY(EditAnywhere)
		bool bIsKnockedback;

	UPROPERTY(EditAnywhere)
		bool bIsStaggered;

	UPROPERTY(EditAnywhere)
		bool bCanCapsuleBeUsedForTargeting;

	UPROPERTY(EditAnywhere)
		bool bUseLineTestForDamageZoneBoneDetection;

	UPROPERTY(EditAnywhere)
		bool bMovingEmote;

	UPROPERTY(EditAnywhere)
		bool bMovingEmoteForwardOnly;

	UPROPERTY(EditAnywhere)
		bool bMovingEmoteFollowingOnly;

	UPROPERTY(EditAnywhere)
		bool bMovingEmoteSkipLandingFX;

	UPROPERTY(EditAnywhere)
		bool bIsInvulnerable;

	UPROPERTY(EditAnywhere)
		bool bSpotted;

	UPROPERTY(EditAnywhere)
		bool bRegisterWithAISight;

	UPROPERTY(EditAnywhere)
		bool bRegisterWithAimAssist;

	UPROPERTY(EditAnywhere)
		bool bPrimaryInputHeld;

	UPROPERTY(EditAnywhere)
		bool bSecondaryInputHeld;

	UPROPERTY(EditAnywhere)
		bool bPrimaryInputQueued;

	UPROPERTY(EditAnywhere)
		bool bWeaponActivated;

	UPROPERTY(EditAnywhere)
		bool bSkipAnalogJump;

//	UPROPERTY(EditAnywhere)
	//	ETraceTypeQuery FootstepTraceTypeQuery;
	
	UPROPERTY(EditAnywhere)
		EFortFootstepSurfaceType FootstepSurfaceType;

	UPROPERTY(EditAnywhere)
		UTexture* FootstepIconOverride;

	UPROPERTY(EditAnywhere)
		FLinearColor SoundIndicatorTintOverride;

	UPROPERTY(EditAnywhere)
		float SoundIndicatorMaxDistance;

	UPROPERTY(EditAnywhere)
		EUpdateRateShiftBucket UroShiftBucket;

	UPROPERTY(EditAnywhere)
		bool bUpdateMeshComponentUpdateFlagOnServer;

	UPROPERTY(EditAnywhere)
		bool bUROCanTieToLODs;

	UPROPERTY(EditAnywhere)
		bool bPostProcessNavLocation;

	UPROPERTY(EditAnywhere)
		bool bHealthSynced;

	UPROPERTY(EditAnywhere)
		bool bWeaponHolstered;

	UPROPERTY(EditAnywhere)
		bool bSkipReticleColorTrace;

	UPROPERTY(EditAnywhere)
		bool UnknownData_56D_6;

	UPROPERTY(EditAnywhere)
		bool bTreatAsPawnForHitMarkers;

	UPROPERTY(EditAnywhere)
		bool bDisplayPawnHitMarkersForChildActors;

	UPROPERTY(EditAnywhere)
		bool bUsesStats;

	UPROPERTY(EditAnywhere)
		bool bAllowBuildingActorTeleport;

	UPROPERTY(EditAnywhere)
		bool bIsDBNO;

	UPROPERTY(EditAnywhere)
		bool bWasDBNOOnDeath;

	UPROPERTY(EditAnywhere)
		bool bCachedIsInAthena;

	UPROPERTY(EditAnywhere)
		bool bShouldUseCharacterMovementIdleFastPath;

	UPROPERTY(EditAnywhere)
		EFortMovementStyle CurrentMovementStyle;

	UPROPERTY(EditAnywhere)
		EFortControlRecoveryBehavior ControlRecoveryBehavior;

	UPROPERTY(EditAnywhere)
		FDataTableRowHandle PawnStatHandle;

	UPROPERTY(EditAnywhere)
		float SlidingFriction;

	UPROPERTY(EditAnywhere)
		float SlidingBrakingDeceleration;

	UPROPERTY(EditAnywhere)
	    UFortStormShieldComponent* StormShieldComponent;

	//UPROPERTY(EditAnywhere)
		//FMulticastInlineDelegate OnStormShieldComponentCreated;

	UPROPERTY(EditAnywhere)
		EFortPawnPushSize PushSize;

	UPROPERTY(EditAnywhere)
		float LastSurfaceTraceTime;

	UPROPERTY(EditAnywhere)
		FVector LastSurfaceTraceLocation;

	UPROPERTY(EditAnywhere)
		int PawnUniqueID;
	/*
	UPROPERTY(EditAnywhere)
		AFortWeapon* CurrentWeapon;

	UPROPERTY(EditAnywhere)
		AFortWeapon* PreviousWeapon;

	UPROPERTY(EditAnywhere)
		TArray<AFortWeapon*> CurrentWeaponList;
*/
	UPROPERTY(EditAnywhere)
		FString PreviousAbilityWeaponNameForTelemetry;

	UPROPERTY(EditAnywhere)
		FName WeaponHandSocketName;

	UPROPERTY(EditAnywhere)
		FName LeftHandWeaponHandSocketName;

	UPROPERTY(EditAnywhere)
		AActor* SpawnSpot;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer DeathTags;

	UPROPERTY(EditAnywhere)
		float SpawnImmunityTime;

	//UPROPERTY(EditAnywhere)
		//AFortWaterBodyActor* CurrentWaterBody;

	UPROPERTY(EditAnywhere)
		bool bShouldSupportSurfaceSwimming;
/*
	UPROPERTY(EditAnywhere)
		AFortWaterBodyActor* ReplicatedWaterBody;

	UPROPERTY(EditAnywhere)
		TArray<AFortPickup*> IncomingPickups;

	UPROPERTY(EditAnywhere)
		TArray<FFortPickupEntryData> PickupDirectionData;
		*/
	UPROPERTY(EditAnywhere)
		bool bIsStunned;

	UPROPERTY(EditAnywhere)
		int AdditiveCringeCount;

	UPROPERTY(EditAnywhere)
		float AdditiveCringeDuration;

	UPROPERTY(EditAnywhere)
		bool bSupportsDamageNumbersAtHitLocation;

	UPROPERTY(EditAnywhere)
		FVector_NetQuantize PushMomentum;

	UPROPERTY(EditAnywhere)
		float LocalSpin;

	UPROPERTY(EditAnywhere)
		FGameplayCueTag DeathCueTag;

	UPROPERTY(EditAnywhere)
		USkeletalMeshSocket* DeathHitSocket;
/*
	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnPlayerStartDBNO;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnDBNOStateChanged;
		*/
	UPROPERTY(EditAnywhere)
		float TeamBeaconMaxDist;

	UPROPERTY(EditAnywhere)
		FColor TeamBeaconTextColor;

	UPROPERTY(EditAnywhere)
		float LastTakeHitTimeTimeout;

	UPROPERTY(EditAnywhere)
		float LastDamagedTime;

	//UPROPERTY(EditAnywhere)
		//AFortWeapon* CurrentlyAttachedWeapon;

	UPROPERTY(EditAnywhere)
		UPrimitiveComponent* CachedNavFloor;

	UPROPERTY(EditAnywhere)
		float MaxFootstepDistance;

	UPROPERTY(EditAnywhere)
		USoundBase* DBNOLandingSound;

	UPROPERTY(EditAnywhere)
		USoundBase* DefaultFootstepSound;

	UPROPERTY(EditAnywhere)
		USoundBase* DefaultFastFootstepSound;

	UPROPERTY(EditAnywhere)
		USoundBase* DefaultLandingSound;

	UPROPERTY(EditAnywhere)
		USoundBase* DefaultHardLandingSound;

	UPROPERTY(EditAnywhere)
		USoundBase* DefaultJumpSound;
	/*
	UPROPERTY(EditAnywhere)
		UWeaponHitNotifyAudioBank* DefaultHitNotifyAudioBank;

	UPROPERTY(EditAnywhere)
		UFortSwimmingAudioBank* DefaultSwimmingAudioBank;
		*/
	UPROPERTY(EditAnywhere)
		float LineTestForDamageZoneBoneDetectionRadius;

	//UPROPERTY(EditAnywhere)
		//FPawnDamageZones DamageZones[0x4];

	UPROPERTY(EditAnywhere)
		float TargettingZOffset;

	UPROPERTY(EditAnywhere)
		TMap<FName, UAudioComponent*> EmoteAudioComps;

	UPROPERTY(EditAnywhere)
		USoundAttenuation* FrontEndEmoteAudioAttenuation;

	UPROPERTY(EditAnywhere)
		USoundAttenuation* InGameEmoteAudioAttenuation;

	UPROPERTY(EditAnywhere)
		USoundEffectSourcePresetChain* InGameEmoteSoundEffectSoundPresetChain;

	UPROPERTY(EditAnywhere)
		TMap<int, UMeshComponent*> EmoteMeshComps;

	UPROPERTY(EditAnywhere)
		TMap<int, AActor*> EmotePropActors;

	UPROPERTY(EditAnywhere)
		TMap<int, UParticleSystemComponent*> EmoteParticleSystemComps;

	UPROPERTY(EditAnywhere)
		int EmoteCount;

	UPROPERTY(EditAnywhere)
		float LastEmoteTime;

	UPROPERTY(EditAnywhere)
		float LastEmoteEndTime;

	UPROPERTY(EditAnywhere)
		UFortItemDefinition* LastEmoteItemDef;

	UPROPERTY(EditAnywhere)
		UFortItemDefinition* LastReplicatedEmoteExecuted;

	UPROPERTY(EditAnywhere)
		bool bFireBlockedByEmoteCooldown;

	UPROPERTY(EditAnywhere)
		float EmoteToFireCooldownTime;

	UPROPERTY(EditAnywhere)
		float EmoteWalkSpeed;
	/*
	UPROPERTY(EditAnywhere)
		TArray<UFortGameplayModifierItemDefinition*> AdditionalModifierDefinitions;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnPawnTeleported;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnPawnLanded;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnPawnStartedEmote;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnPawnStoppedEmote;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnHitPawn;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnDied;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnDeathEffects;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnDamaged;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnDidDamage;

	UPROPERTY(EditAnywhere)
		UFortFootstepAudioBank* FootstepBank;

	UPROPERTY(EditAnywhere)
		UFortFoleyFootstepContext* FoleyFootstepContext;

	UPROPERTY(EditAnywhere)
		UFortFoleyHitContext* FoleyHitContext;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnWeaponEquippedDelegate;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnWeaponUnEquippedDelegate;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnWeaponAttachmentChangedDelegate;

	UPROPERTY(EditAnywhere)
		UGameplayEffect* HealthRegenDelayGameplayEffect;

	UPROPERTY(EditAnywhere)
		UGameplayEffect* HealthRegenGameplayEffect;

	UPROPERTY(EditAnywhere)
		UGameplayEffect* ShieldRegenDelayGameplayEffect;

	UPROPERTY(EditAnywhere)
		UGameplayEffect* ShieldRegenGameplayEffect;
		*/
	UPROPERTY(EditAnywhere)
		UAnimInstance* CurrentWeaponAnimLayerOverlayClass;
	/*
	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnHolsteredEvent;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnUnholsteredEvent;
		*/
	UPROPERTY(EditAnywhere)
		int WeaponHolsterCounter;

	UPROPERTY(EditAnywhere)
		TArray<FName> WeaponHolsterIds;

	UPROPERTY(EditAnywhere)
		float StaySpottedTime;

	UPROPERTY(EditAnywhere)
		FName SpottedEvent;
	/*
	UPROPERTY(EditAnywhere)
		UFortFeedbackBank* DefaultFeedback;

	UPROPERTY(EditAnywhere)
		TArray<AFortEmitterCameraLensEffectDirectional*> ActiveSoundIndicators;

	UPROPERTY(EditAnywhere)
		AFortEmitterCameraLensEffectDirectional* DefaultSoundTrackingVisual;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer SoundTrackingVisibilityTags;

	UPROPERTY(EditAnywhere)
		TMap<EFortSoundIndicatorTypes, float> PriorityModifiers;

	UPROPERTY(EditAnywhere)
		TArray<FFortPawnVocalChord> VocalChords;
	*/
	UPROPERTY(EditAnywhere)
		bool bIsDisconnectedPawn;
	/*
	UPROPERTY(EditAnywhere)
		FActiveGameplayEffectHandle MaxHealthApplicationHandle;

	UPROPERTY(EditAnywhere)
		UGameplayEffect* MaxHealthApplicationGameplayEffect;

	UPROPERTY(EditAnywhere)
		UFortHealthSet* HealthSet;

	UPROPERTY(EditAnywhere)
		UFortControlResistanceSet* ControlResistanceSet;

	UPROPERTY(EditAnywhere)
		UFortDamageSet* DamageSet;
		*/
	UPROPERTY(EditAnywhere, Instanced)
		UFortMovementSet* MovementSet;
	
	UPROPERTY(EditAnywhere, Instanced)
		UFortAdvancedMovementSet* AdvancedMovementSet;
	/*
	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnAbilityDecisionWindowStackUpdated;

	UPROPERTY(EditAnywhere)
		UFortAbilitySystemComponent* AbilitySystemComponent;
		
	//UPROPERTY(EditAnywhere)
		//TArray<FFortActiveMontageDecisionWindow> DecisionWindowStack;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer GameplayTags;

	UPROPERTY(EditAnywhere)
		FText DisplayName;
	/*
	UPROPERTY(EditAnywhere)
		TArray<FDamagerInfo> Damagers;

	UPROPERTY(EditAnywhere)
		TArray<FDamageDoneInfo> DamageDone;

	UPROPERTY(EditAnywhere)
		TArray<FDamageDoneSourceInfo> TotalDamageDoneTrackers;

	UPROPERTY(EditAnywhere)
		TArray<FDamageDoneTargetInfo> TargetDamageDoneTrackers;
		*/
	UPROPERTY(EditAnywhere)
		float DamageDoneLastAtTime;

	UPROPERTY(EditAnywhere)
		float TotalPlayerDamageDealt;

	//UPROPERTY(EditAnywhere)
		//UFortHealthBarIndicator* HealthBarIndicator;

	UPROPERTY(EditAnywhere)
		FGameplayTag CurrentCalloutTag;

	//UPROPERTY(EditAnywhere)
		//TArray<FCalloutEntry> CalloutEntries;

	UPROPERTY(EditAnywhere)
		float HealthBarWidth;

	UPROPERTY(EditAnywhere)
		float HealthBarHeightMultiplier;

	UPROPERTY(EditAnywhere)
		FSlateBrush SpottedBrush;

	UPROPERTY(EditAnywhere)
		FVector SpottedIconOffset;

	UPROPERTY(EditAnywhere)
		int ClientNonRenderedAnimUpdateRate;

	UPROPERTY(EditAnywhere)
		int MaxEvalRateForInterpolation;

	UPROPERTY(EditAnywhere)
		TArray<float> AnimUpdateRateVisibleMaxDistanceFactor;

	UPROPERTY(EditAnywhere)
		TMap<int, int> LODToFrameSkipMap;
	/*
	UPROPERTY(EditAnywhere)
		FFortConversationSentence CurrentSentence;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnPawnHealthChanged;

	UPROPERTY(EditAnywhere)
		FAthenaBatchedDamageGameplayCues_Shared AccumulatedBatchData_Shared;

	UPROPERTY(EditAnywhere)
		FAthenaBatchedDamageGameplayCues_NonShared AccumulatedBatchData_NonShared;
		*/
	UPROPERTY(EditAnywhere)
		FGameplayCueParameters BatchedGameplayCueParameters;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer ReplayItemActions;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer HidingVisibilityTags;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer HidingTransitionVisibilityTags;
	/*
	UPROPERTY(EditAnywhere)
		UPegasusGameEventCollector* PegasusTimelineCollector;

	UPROPERTY(EditAnywhere)
		UFortAthenaAILODComponent* AILODComponent;

	UPROPERTY(EditAnywhere)
		FClientAILODSettings ClientAILODSettings;
		*/
	UPROPERTY(EditAnywhere)
		FGameplayTag FallbackTag;

	UPROPERTY(EditAnywhere)
		FString DebugType;

	//UPROPERTY(EditAnywhere)
		//TMap<int, FRecordedGunshot> RecordedGunshots;

};