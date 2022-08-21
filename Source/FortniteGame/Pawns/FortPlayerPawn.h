// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FortPawn.h"
#include "Components/TimelineComponent.h"
#include "Components/BoxComponent.h"
#include "GameplayEffect.h"
#include "../Enum/EFortPawnStasisMode.h"
#include "../Enum/EFortCustomBodyType.h"
#include "../Enum/EFortCustomGender.h"
#include "../Enum/EFortCustomMovement.h"
#include "../Enum/EFortFacialAnimTypes.h"
#include "../Enum/EFortPawnDisplayContext.h"
#include "Curves/CurveFloat.h"
#include "../ItemDef/FortWorldItemDefinition.h"
#include "../Athena/ItemDef/AthenaCharmItemDefinition.h"
#include "../Athena/ItemDef/AthenaGliderItemDefinition.h"
#include "../CharacterParts/CustomCharacterPart.h"
#include "../Enum/EFortBuildingState.h"
#include "FortPlayerPawn.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API AFortPlayerPawn : public AFortPawn
{
	GENERATED_BODY()
	
	//	UPROPERTY(EditAnywhere)
		//FFortAthenaVehicleInputStateReliable VehicleInputStateReliable;

	UPROPERTY(EditAnywhere)
		bool bIsNearSafeZoneEdge;

	UPROPERTY(EditAnywhere)
		bool bPlayingSafeZoneEffects;

	UPROPERTY(EditAnywhere)
		bool bDoSafeZoneCleanup;

	UPROPERTY(EditAnywhere)
		bool bIsSwimmingAnimLayerLinked;

	UPROPERTY(EditAnywhere)
		bool bIsSprintJump;

	UPROPERTY(EditAnywhere)
		bool bHasDisableSprintTag;

	UPROPERTY(EditAnywhere)
		bool bDisableSwimSprintCancel;

	UPROPERTY(EditAnywhere)
		bool bIsWaterJump;

	UPROPERTY(EditAnywhere)
		bool bIsWaterSprintBoost;

	UPROPERTY(EditAnywhere)
		bool bIsWaterSprintBoostPending;

	UPROPERTY(EditAnywhere)
		bool bPlayingPassengerToPassengerAnimation;

	UPROPERTY(EditAnywhere)
		bool bPlayingDriverToPassengerAnimation;

	UPROPERTY(EditAnywhere)
		bool bIsTargeting;

	UPROPERTY(EditAnywhere)
		bool bIsTargetingConsumableThrow;

	UPROPERTY(EditAnywhere)
		bool bIsSwappingCharacterParts;

	UPROPERTY(EditAnywhere)
		bool bBalloonMovementActivated;

	UPROPERTY(EditAnywhere)
		bool bIsScriptedBot;

	UPROPERTY(EditAnywhere)
		bool bBuildHotfix;

//	UPROPERTY(EditAnywhere)
	//	FLightingChannels FortPlayerPawnLightingChannels;

	UPROPERTY(EditAnywhere)
		EFortPawnStasisMode StasisMode;

	UPROPERTY(EditAnywhere)
		EFortBuildingState BuildingState;

	UPROPERTY(EditAnywhere)
		int AccelerationZPack;

	UPROPERTY(EditAnywhere)
		UCurveFloat* ParachuteDirectionalSpeedMultiplierCurve;

	UPROPERTY(EditAnywhere)
		UCurveFloat* SkydivingDirectionalSpeedMultiplierCurve;

	UPROPERTY(EditAnywhere)
		UCurveFloat* BallooningDirectionalSpeedMultiplierCurve;

	UPROPERTY(EditAnywhere)
		UCurveFloat* DirectionalSpeedMultiplierCurve;

	UPROPERTY(EditAnywhere)
		float MinimumTimeBetweenSteps;

	UPROPERTY(EditAnywhere)
		float LastStepTime;
	/*
	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnFootstepEvent;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnPawnEnterWater;
		*/
	UPROPERTY(EditAnywhere)
		bool bIsInWaterVolume;

	UPROPERTY(EditAnywhere)
		bool bNotifyBlueprintWhenLandscapeTeleporting;

	UPROPERTY(EditAnywhere)
		bool bParachuteDeployFixedVerticalDistance;

	UPROPERTY(EditAnywhere)
		bool bIsSkydiving;

	UPROPERTY(EditAnywhere)
		bool bIsParachuteOpen;

	UPROPERTY(EditAnywhere)
		bool bLocalIsSkydiving;

	UPROPERTY(EditAnywhere)
		bool bLocalIsParachuteForcedOpen;

	UPROPERTY(EditAnywhere)
		bool bIsParachuteForcedOpen;

	UPROPERTY(EditAnywhere)
		bool bIsSkydivingFromBus;

	UPROPERTY(EditAnywhere)
		bool bIsSkydivingFromLaunchPad;

	UPROPERTY(EditAnywhere)
		bool bPendingSkydiveLaunch;

	UPROPERTY(EditAnywhere)
		bool bIsInVortex;

	UPROPERTY(EditAnywhere)
		bool bReplicatedIsInVortex;

	UPROPERTY(EditAnywhere)
		bool bIsInSlipperyMovement;

	UPROPERTY(EditAnywhere)
		bool bReplicatedIsInSlipperyMovement;

	UPROPERTY(EditAnywhere)
		bool bIsBelowAutoDeployTestHeight;

	UPROPERTY(EditAnywhere)
		bool bIsSlopeSliding;

	UPROPERTY(EditAnywhere)
		bool bIsProxySimulationTimedOut;

	UPROPERTY(EditAnywhere)
		bool bIsPedestalHero;

	UPROPERTY(EditAnywhere)
		bool bInGliderRedeploy;

	UPROPERTY(EditAnywhere)
		bool bLocalInGliderRedeploy;

	UPROPERTY(EditAnywhere)
		bool UnknownData_12E1_0;

	UPROPERTY(EditAnywhere)
		bool bBeingRepossessed;

	UPROPERTY(EditAnywhere)
		bool bInitAbilitySystemComponentFromPlayerState;

	UPROPERTY(EditAnywhere)
		bool bStartedInteractSearch;

	UPROPERTY(EditAnywhere)
		bool bPawnLODDirty;

	UPROPERTY(EditAnywhere)
		bool bIsUsingJetpack;

	UPROPERTY(EditAnywhere)
		bool bIsPlayingEmote;

	UPROPERTY(EditAnywhere)
		bool bShowingOverdriveEffect;

	UPROPERTY(EditAnywhere)
		bool bIsRespawning;

	UPROPERTY(EditAnywhere)
		bool bIsRespawningInAir;

	UPROPERTY(EditAnywhere)
		bool bInitializedPostRepPlayerState;

	UPROPERTY(EditAnywhere)
		bool bEnableCharacterPartRigidBodyNode;

	UPROPERTY(EditAnywhere)
		bool bInitializedCharacterPartRBANSettings;

	UPROPERTY(EditAnywhere)
		bool bIsLocalViewTarget;

	UPROPERTY(EditAnywhere)
		bool bHasWaterParticleSystem;

	UPROPERTY(EditAnywhere)
		bool bCanShowDefaultSkin;

	UPROPERTY(EditAnywhere)
		bool bDisabledTetheringSupport;

	UPROPERTY(EditAnywhere)
		bool bIsInFrontEndHologram;

	//UPROPERTY(EditAnywhere)
		//FWeakObjectPtr<AActor> HeldObject;

	UPROPERTY(EditAnywhere)
		bool bForceMoveRelativeToCameraRotation;

	UPROPERTY(EditAnywhere)
		bool bIsWaitingForEmoteInteraction;

	UPROPERTY(EditAnywhere)
		bool bIsEmoteLeader;

	UPROPERTY(EditAnywhere)
		bool bShouldSyncAnimationWithEmoteLeader;

	UPROPERTY(EditAnywhere)
		bool bShouldJitterAnimationSyncWithEmoteLeader;

	UPROPERTY(EditAnywhere)
		bool bDoubleFileEmoteSecondLine;

	UPROPERTY(EditAnywhere)
		bool bEmoteUsesSecondaryFire;

	UPROPERTY(EditAnywhere)
		bool bLockGroupEmoteLeaderRotation;

	UPROPERTY(EditAnywhere)
		AFortPlayerPawn* GroupEmoteLookTarget;

	UPROPERTY(EditAnywhere)
		TArray<AFortPlayerPawn*> GroupEmoteFollowers;

	UPROPERTY(EditAnywhere)
		float GroupEmoteAnimOffset;

	UPROPERTY(EditAnywhere)
		float GroupEmoteLeaderRotationYawOffset;

	UPROPERTY(EditAnywhere)
		FRotator GroupEmoteLookTargetRotationLeader;

	UPROPERTY(EditAnywhere)
		float GroupEmoteMaximumZDifference;
	/*
	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnGroupEmoteSyncValueChanged;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnGroupEmoteFollowerLeft;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnGroupEmoteSecondaryFirePressed;
		*/
	UPROPERTY(EditAnywhere)
		UAnimMontage* CurrentMontagerLeader;

	UPROPERTY(EditAnywhere)
		UAnimMontage* CurrentSyncedMontage;

	UPROPERTY(EditAnywhere)
		bool bCharacterPartsCastIndirectShadows;

	UPROPERTY(EditAnywhere)
		EFortCustomGender CharacterGender;

	UPROPERTY(EditAnywhere)
		EFortCustomBodyType CharacterBodyType;

	UPROPERTY(EditAnywhere)
		float JumpLastActivatedTime;

	UPROPERTY(EditAnywhere)
		FVector PreviousPosition;

	UPROPERTY(EditAnywhere)
		FVector PreviousVelocity;

	UPROPERTY(EditAnywhere)
		int ReplicatedCustomMeshHeightAdjustTarget;

	UPROPERTY(EditAnywhere)
		float UnburrowLaunchXYSpeed;

	UPROPERTY(EditAnywhere)
		float UnburrowLaunchZSpeed;

//	UPROPERTY(EditAnywhere)
	//	FFortAthenaVehicleInputStateUnreliable VehicleInputStateUnreliable;

	UPROPERTY(EditAnywhere)
		bool bIsInAnyStorm;

	UPROPERTY(EditAnywhere)
		bool bIsInsideSafeZone;

	UPROPERTY(EditAnywhere)
		UGameplayEffect* SafeZoneAppliedGE;

	UPROPERTY(EditAnywhere)
		UGameplayEffect* SelfReviveGameplayEffect;

	UPROPERTY(EditAnywhere)
		UGameplayEffect* TeammateReviveGameplayEffect;

	UPROPERTY(EditAnywhere)
		FScalableFloat SetByCallerReviveHealth;

	UPROPERTY(EditAnywhere)
		FName DBNOInteractionCollisionProfile;

	UPROPERTY(EditAnywhere)
		FVector DBNOInteractionBoxExtent;

	UPROPERTY(EditAnywhere)
		float DBNODeferTime;

	UPROPERTY(EditAnywhere)
		UBoxComponent* DBNOInteractCollisionComponent;

	UPROPERTY(EditAnywhere)
		FGameplayTag EventReviveTag;

	UPROPERTY(EditAnywhere)
		float AggroRangeOverride;

	UPROPERTY(EditAnywhere)
		float SetByCallerReviveSignalInStorm;

	//UPROPERTY(EditAnywhere)
		//TScriptInterface<None> ArmoredInterface;

	//UPROPERTY(EditAnywhere)
		//UBuildingEditModeMetadata* LastBuildingMetadata;

	UPROPERTY(EditAnywhere)
		float SprintCancelTime;

	UPROPERTY(EditAnywhere)
		float WaterSprintBoostAllowedTimer;

	UPROPERTY(EditAnywhere)
		bool bHasStartedFloating;

//	UPROPERTY(EditAnywhere)
	//	FZiplinePawnState ZiplineState;

	UPROPERTY(EditAnywhere)
		FCurveTableRowHandle ZiplineJumpDampening;

	UPROPERTY(EditAnywhere)
		FCurveTableRowHandle ZiplineJumpStrength;

	UPROPERTY(EditAnywhere)
		FScalableFloat ZiplineJumpActivateDelay;

	UPROPERTY(EditAnywhere)
		FScalableFloat ZiplineRentryProtectionDelay;

	UPROPERTY(EditAnywhere)
		float ZiplineSocketZOffset;


//	UPROPERTY(EditAnywhere)
//		FMulticastInlineDelegate ZiplineStateChanged;

	UPROPERTY(EditAnywhere)
		float ZiplineSpeedFactorTarget;

	UPROPERTY(EditAnywhere)
		float ZiplineSpeedFactor;

	UPROPERTY(EditAnywhere)
		FScalableFloat EnableSwimSprintDiveCooldown;

	UPROPERTY(EditAnywhere)
		FScalableFloat SwimSprintDiveCooldown;

	UPROPERTY(EditAnywhere)
		FScalableFloat SwimDiveBoostTimeThreshold;

	UPROPERTY(EditAnywhere)
		float ClientSwimDiveInputTime;

	UPROPERTY(EditAnywhere)
		bool bCanPredictJumpApex;

//	UPROPERTY(EditAnywhere)
	//	TArray<AFortAIPawn*> AbilityAITargets;

	UPROPERTY(EditAnywhere)
		UAnimMontage* UnableToPerformActionMontage;

	UPROPERTY(EditAnywhere)
		USoundBase* UnableToPerformActionSound;

	UPROPERTY(EditAnywhere)
		float MoveSoundStimulusBroadcastInterval;

	UPROPERTY(EditAnywhere)
		float EmoteStartTime;

	UPROPERTY(EditAnywhere)
		float EmoteRandomNum;

	UPROPERTY(EditAnywhere)
		bool bPlayingPassengerToDriverAnimation;

	UPROPERTY(EditAnywhere)
		float VehicleSpeedAtTimeOfJump;

	/*
	UPROPERTY(EditAnywhere)
		FVehiclePawnState VehicleStateRep;

	UPROPERTY(EditAnywhere)
		AFortPlayerControllerGameplay* InteractingPCRep;

	UPROPERTY(EditAnywhere)
		FVehiclePawnState VehicleStateLocal;
		*/
	UPROPERTY(EditAnywhere)
		AActor* VehicleLastTick;

	//UPROPERTY(EditAnywhere)
		//UFortPawnComponent_Tether* TetherComponent;

	UPROPERTY(EditAnywhere)
		float PendingTetherLaunch;

	UPROPERTY(EditAnywhere)
		float TetherJumpLastTime;

	UPROPERTY(EditAnywhere)
		bool bSupportsTetheredMovement;

	//UPROPERTY(EditAnywhere)
		//ABuildingGameplayActor* BalloonRope;

	//UPROPERTY(EditAnywhere)
		//FMulticastInlineDelegate OnPossessedProp;

	//UPROPERTY(EditAnywhere)
	//	ABuildingGameplayActorPlayerPropAttachment* PossessedProp;

	UPROPERTY(EditAnywhere)
		int SlopeCameraOffsetFrameCounter;

	//UPROPERTY(EditAnywhere)
		//FVectorRK4SpringInterpolator SlopeCameraOffsetInterpolator;

	UPROPERTY(EditAnywhere)
		FVector LargeBodyTypeTargetingOffset;

	//UPROPERTY(EditAnywhere)
		//UInputComponent* VehicleInputComponent;

	UPROPERTY(EditAnywhere)
		UAnimMontage* BluePrintPlaceAnimation;

	UPROPERTY(EditAnywhere)
		UAnimMontage* BluePrintEditAnimation;
/*
	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnStartedInteractSearch;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnEndedInteractSearch;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnAttemptedInstantInteractSearch;
		*/
	UPROPERTY(EditAnywhere)
		FName EmoteInteractionCollisionProfile;

	UPROPERTY(EditAnywhere)
		FVector EmoteInteractionBoxExtent;

	UPROPERTY(EditAnywhere)
		UBoxComponent* EmoteInteractCollisionComponent;

	//UPROPERTY(EditAnywhere)
		//FMulticastInlineDelegate OnPartChanged;

	//UPROPERTY(EditAnywhere)
		//UMaterialInstanceDynamic* BlueprintPaperMID;

	UPROPERTY(EditAnywhere)
		FTimeline BlueprintPaperPulseTimeline;

	//UPROPERTY(EditAnywhere)
		//UCustomColorComponent* AccessoryColorSwatchHandler[0x7];

	//UPROPERTY(EditAnywhere)
		//UFortHero* Hero;

//	UPROPERTY(EditAnywhere)
	//	FWeakObjectPtr<UFortHeroType> OvrHeroType;

	UPROPERTY(EditAnywhere)
		EFortPawnDisplayContext DisplayContext;

	//UPROPERTY(EditAnywhere)
		//UCustomPlayerComponent* HACK_CustomPRIComponent;

	UPROPERTY(EditAnywhere)
		UCustomCharacterPart* CharacterParts[0x7];
	/*
	UPROPERTY(EditAnywhere)
		UCustomColorSwatch* CharacterColorSwatches[0x2];

	UPROPERTY(EditAnywhere)
		UCustomColorSwatch* CharacterPartColorSwatches[0x7];
		*/
	UPROPERTY(EditAnywhere)
		UAthenaCharmItemDefinition* CharacterCharms[0x4];

	UPROPERTY(EditAnywhere)
		TArray<UCustomCharacterPart*> RequiredVariantParts;

	//UPROPERTY(EditAnywhere)
		//USkeletalMeshComponentBudgeted* CharacterPartSkeletalMeshComponents[0x7];

	//UPROPERTY(EditAnywhere)
	//	TArray<AFortPlayerCharm*> CharacterCharmActors;

	UPROPERTY(EditAnywhere)
		int CharacterPartSMHiddenRefCount[0x7];

//	UPROPERTY(EditAnywhere)
	//	FFortAthenaLoadout BaseCosmeticLoadout;

	//UPROPERTY(EditAnywhere)
		//FFortAthenaLoadout AppliedCosmeticLoadout;

	//UPROPERTY(EditAnywhere)
		//TArray<FFortAppliedSwapItemAndVariantData> AppliedSwaps;

	//UPROPERTY(EditAnywhere)
		//FFortAthenaLoadout CosmeticLoadout;

	UPROPERTY(EditAnywhere)
		int ServerLoadoutChangeSync;

	UPROPERTY(EditAnywhere)
		bool bAllowClientLoadoutChangeSync;

	/*
	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnMaterialOverrideApplied;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnMaterialOverrideCleared;
	
	UPROPERTY(EditAnywhere)
		TArray<FFortPawnMaterialOverride> MaterialOverrides;

	UPROPERTY(EditAnywhere)
		TArray<FFortPawnMaterialOverride> LocalMaterialOverrides;

	UPROPERTY(EditAnywhere)
		TMap<USceneComponent*, FFortPawnMaterialOverrideState> MaterialOverrideStateMap;
		*/
	UPROPERTY(EditAnywhere)
		UCustomCharacterPart* PreviousCharacterParts[0x7];
	/*
	UPROPERTY(EditAnywhere)
		ACustomCharacterPartModifier* CharacterPartModifiers[0x7];

	UPROPERTY(EditAnywhere)
		FFortCharacterPartsRepMontageInfo RepCharPartAnimMontageInfo;

	UPROPERTY(EditAnywhere)
		FFortClientObservedStatArray ClientObservedStats;
		*/
	UPROPERTY(EditAnywhere)
		UAnimInstance* AnimBPOverride;

	UPROPERTY(EditAnywhere)
		UAnimInstance* OriginalAnimBP;

	UPROPERTY(EditAnywhere)
		USoundBase* OnCrouchStartSound;

	UPROPERTY(EditAnywhere)
		USoundBase* OnCrouchEndSound;
	/*
	UPROPERTY(EditAnywhere)
		UFortFootstepAudioBank* FootstepBankOverride;

	UPROPERTY(EditAnywhere)
		UFortFootstepAudioBank* OriginalFootstepBank;

	UPROPERTY(EditAnywhere)
		TArray<AFortPickup*> QueuedAutoPickups;
		*/
	//UPROPERTY(EditAnywhere)
		//TArray<FIgnoreCollisionActor> IgnoreActors;

	UPROPERTY(EditAnywhere)
		FScalableFloat AutoPickupDropRepickupDelay;

	UPROPERTY(EditAnywhere)
		FName CarriedObjectAttachmentSocket;

	UPROPERTY(EditAnywhere)
		float PickupSpeedMultiplier;

	UPROPERTY(EditAnywhere)
		FSlateBrush MiniMapIconBrush;

	UPROPERTY(EditAnywhere)
		FSlateBrush AboveBelowMiniMapIconBrush;

	UPROPERTY(EditAnywhere)
		FSlateBrush FarOffMiniMapIconBrush;

	UPROPERTY(EditAnywhere)
		FSlateBrush DBNOMiniMapIconBrush;

	UPROPERTY(EditAnywhere)
		FLinearColor MinimapIconColorSelf;

	UPROPERTY(EditAnywhere)
		FLinearColor MinimapIconColorTeammate;

	UPROPERTY(EditAnywhere)
		FLinearColor MinimapIconColorEnemy;

	UPROPERTY(EditAnywhere)
		float MaxIndicatorVisibilityDistForEnemies;

	UPROPERTY(EditAnywhere)
		float MaxIndicatorVisibilityDistForAllies;

	//UPROPERTY(EditAnywhere)
	//	FFortDBNOCarryHoisterData DBNOHoisterData;

	UPROPERTY(EditAnywhere)
		AFortPlayerPawn* DBNOHoistee;

	//UPROPERTY(EditAnywhere)
		//UFortWeaponAnimSet* DBNOHoisterAnimSet;

	UPROPERTY(EditAnywhere)
		UAnimInstance* DBNOHoisteeAnimClass;

	UPROPERTY(EditAnywhere)
		float ThrowCarriedPlayerStrengthXY;

	UPROPERTY(EditAnywhere)
		float ThrowCarriedPlayerStrengthZ;

	UPROPERTY(EditAnywhere)
		float DropCarriedPlayerForwardOffset;

	UPROPERTY(EditAnywhere)
		float DropCarriedPlayerHeightOffset;

	UPROPERTY(EditAnywhere)
		float DropCarriedPlayerTraceHeight;

	UPROPERTY(EditAnywhere)
		bool bAllowDBNOCarry;

	UPROPERTY(EditAnywhere)
		bool bAllowDBNOCarryEnemies;

	UPROPERTY(EditAnywhere)
		bool bIsBeingDBNOCarried;

	UPROPERTY(EditAnywhere)
		bool bIsDBNOCarrying;

	UPROPERTY(EditAnywhere)
		bool bRequestedThrowCarriedPlayer;

	UPROPERTY(EditAnywhere)
		int PackedReplicatedSlopeAngles;

	/*
	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnNewPlayerState;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnAbilitySystemComponentInitialized;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnFinishedCharacterCustomization;
		*/
	//UPROPERTY(EditAnywhere)
		//UFortCustomizationAssetLoader* CustomizationAssetLoader;

	UPROPERTY(EditAnywhere)
		UParticleSystem* SpawnParticles;

	UPROPERTY(EditAnywhere)
		USoundBase* SpawnSound;

	UPROPERTY(EditAnywhere)
		bool bIsLocalPlayer;

	UPROPERTY(EditAnywhere)
		bool bDamagedEnemy;
	/*
	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnDamageComboIncrement;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnDamageComboReset;
		*/
	UPROPERTY(EditAnywhere)
		int PlayerStatus;

	UPROPERTY(EditAnywhere)
		int AccelerationPack;

//	UPROPERTY(EditAnywhere)
	//	FGameplayAbilityRepAnimMontage RepAnimMontageInfo;

	UPROPERTY(EditAnywhere)
		int RepAnimMontageStartSection;

	UPROPERTY(EditAnywhere)
		bool bNetMovementPrioritized;
	/*
	UPROPERTY(EditAnywhere)
		FReplicatedMontagePair LandingMontagePair;

	UPROPERTY(EditAnywhere)
		FPreviouslyAppliedVariantData PriorVariantData;

	UPROPERTY(EditAnywhere)
		TArray<UFortWorldItemDefinition*> TempWeaponsStack;

	UPROPERTY(EditAnywhere)
		TArray<UFortAnimNotifyState_RootMotionInterrupt*> RootMotionInterruptNotifyStack;
		*/
	UPROPERTY(EditAnywhere)
		TArray<UAnimMontage*> RootMotionInterruptMontageStack;

	//UPROPERTY(EditAnywhere)
		//UFortVisibilityComponent* VisibilityComponent;

	//UPROPERTY(EditAnywhere)
		//UPostProcessComponent* BlendablesPostProcessComp;

	UPROPERTY(EditAnywhere)
		bool bUseControllerRotationYawToRestore;

	/*
	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnBeginSkydivingEvent;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnEndSkydivingEvent;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnBeginParachuteMovementEvent;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnEndParachuteMovementEvent;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnBallooningGravityCeilingChanged;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnEnteredAircraft;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnPawnPossessed;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnPawnUnpossessed;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnEmoteInteracted;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnSafeZoneOccupancyChangedEvent;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnHeldObjectPickedUp;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnHeldObjectDropped;
		*/
	UPROPERTY(EditAnywhere)
		TMap<EFortCustomMovement, UTexture*> CustomMovementIndicators;

	UPROPERTY(EditAnywhere)
		USoundBase* CurrentGliderOpenSound;

	UPROPERTY(EditAnywhere)
		USoundBase* CurrentGliderCloseSound;

	//UPROPERTY(EditAnywhere)
		//FWeakObjectPtr<UAudioComponent> CurrentGliderCloseAudioComponent;

	UPROPERTY(EditAnywhere)
		bool bParachuteLockedOpen;

	UPROPERTY(EditAnywhere)
		bool bLocalParachuteLockedOpen;

	//UPROPERTY(EditAnywhere)
		//FRepFortMeshAttachment AttachmentMesh;

	//UPROPERTY(EditAnywhere)
		//USkeletalMeshComponentBudgeted* AttachmentMeshComponent;

	//UPROPERTY(EditAnywhere)
		//UFortPawnScriptedBehavior* BotScriptedBehavior;

	//UPROPERTY(EditAnywhere)
		//FVortexParams VortexParams;

	//UPROPERTY(EditAnywhere)
		//AFortSkyTube* ReplicatedSkyTube;

	//UPROPERTY(EditAnywhere)
		//AFortSkyTube* CurrentSkyTube;

//	UPROPERTY(EditAnywhere)
	//	TArray<AFortWaterBodyActor*> IgnoredWaterBodies;

	//UPROPERTY(EditAnywhere)
		//UFortUnderwaterDamageComponent* UnderwaterDamageComponent;

	//UPROPERTY(EditAnywhere)
		//FSlipperySlopeParams SlipperySlopeParams;

	UPROPERTY(EditAnywhere)
		UAthenaGliderItemDefinition* GliderClass;

	//UPROPERTY(EditAnywhere)
		//AFortPlayerPetRepState* PetState;

	//UPROPERTY(EditAnywhere)
		//AFortPlayerPet* CosmeticPetInstance;

	//UPROPERTY(EditAnywhere)
		//AFortPlayerParachute* ParachuteAttachment;

	UPROPERTY(EditAnywhere)
		TArray<UAthenaGliderItemDefinition*> GliderOverrideStack;

	UPROPERTY(EditAnywhere)
		bool bResetGliderOverrideOnLanding;

	UPROPERTY(EditAnywhere)
		FScalableFloat ParachuteDeployTraceForGroundDistance;

	UPROPERTY(EditAnywhere)
		FScalableFloat LaunchPadParachuteDeployTraceForGroundDistance;

	UPROPERTY(EditAnywhere)
		FScalableFloat LaunchPadParachuteDeployTraceForDownwardSpeed;

	UPROPERTY(EditAnywhere)
		FScalableFloat ParachuteDeployVelocityBlend;

	UPROPERTY(EditAnywhere)
		float ParachuteCooldownToOpen;

	UPROPERTY(EditAnywhere)
		float ParachuteCooldownToClose;

	UPROPERTY(EditAnywhere)
		FScalableFloat GliderRedeployAllowedRow;

	UPROPERTY(EditAnywhere)
		FScalableFloat GliderRedeployLateralVelocityMultiplierRow;

	UPROPERTY(EditAnywhere)
		FScalableFloat GliderRedeployHeighLimitRow;

	UPROPERTY(EditAnywhere)
		FScalableFloat BalloonFallDamageThresholdVelocityZ;

	UPROPERTY(EditAnywhere)
		UAnimInstance* PreDrivingAnimBP;

	UPROPERTY(EditAnywhere)
		UAnimInstance* CurrentVehicleAnimLayerOverlayClass;

	UPROPERTY(EditAnywhere)
		UAnimInstance* CurrentSwimmingAnimLayerOverlayClass;

	UPROPERTY(EditAnywhere)
		UAnimInstance* DefaultSwimmingAnimLayerOverlayClass;

	UPROPERTY(EditAnywhere)
		float TimeBeforeSwimmingLayerDeactivated;

	UPROPERTY(EditAnywhere)
		UAudioComponent* ParachuteAudioLoop;

	UPROPERTY(EditAnywhere)
		float ParachuteAndSkydiveAudioFadeInTime;

	UPROPERTY(EditAnywhere)
		float ParachuteAndSkydiveAudioFadeOutTime;

	UPROPERTY(EditAnywhere)
		UAudioComponent* SkydiveAudioLoop;

	UPROPERTY(EditAnywhere)
		USoundBase* SoundOnParachuteForcedOpen;

	UPROPERTY(EditAnywhere)
		USoundBase* SkydivingLoop1P;

	UPROPERTY(EditAnywhere)
		USoundBase* SkydivingLoop3P;

	UPROPERTY(EditAnywhere)
		USoundBase* ParachuteOpenLoop1P;

	UPROPERTY(EditAnywhere)
		USoundBase* ParachuteOpenLoop3P;

	UPROPERTY(EditAnywhere)
		UAudioComponent* SwimmingAudioLoop;

	UPROPERTY(EditAnywhere)
		float SwimmingAudioFadeOutTime;

	UPROPERTY(EditAnywhere)
		float SwimmingAudioInterpSpeed;

	UPROPERTY(EditAnywhere)
		USoundBase* SoundOnSwimmingLoop;

	UPROPERTY(EditAnywhere)
		int RemoteViewData32;

	UPROPERTY(EditAnywhere)
		float LastQuickBarSwitchRequestTime;

	UPROPERTY(EditAnywhere)
		float CrouchStartTime;

	UPROPERTY(EditAnywhere)
		float CrouchEndTime;

	UPROPERTY(EditAnywhere)
		float CrouchLerpTime;

	UPROPERTY(EditAnywhere)
		float MeleeAbilityCooldown;

	UPROPERTY(EditAnywhere)
		bool bDisallowInterrogation;

	UPROPERTY(EditAnywhere)
		bool bDisallowInterrogationOnNPC;

	UPROPERTY(EditAnywhere)
		bool bHideBodyOnDeathRequested;

//	UPROPERTY(EditAnywhere)
	//	FWeakObjectPtr<AFortRemoteControlledPawnAthena> ControlledRCPawn;

	UPROPERTY(EditAnywhere)
		FRotator StoredControlRotation;

	UPROPERTY(EditAnywhere)
		EFortFacialAnimTypes FacialTypeOverride;

	UPROPERTY(EditAnywhere)
		float GhostModeExitStartTime;

	UPROPERTY(EditAnywhere)
		float GhostModeExitDuration;

	UPROPERTY(EditAnywhere)
		UParticleSystemComponent* PSC_PlayerInWater;

	UPROPERTY(EditAnywhere)
		UParticleSystemComponent* PSC_PlayerInWaterSurfaceSwimming;
	/*
	UPROPERTY(EditAnywhere)
		UNiagaraSystem* NiagaraPlayerInWaterBasicAsset;

	UPROPERTY(EditAnywhere)
		UNiagaraSystem* NiagaraPlayerInWaterSwimmingAsset;

	UPROPERTY(EditAnywhere)
		UNiagaraSystem* NiagaraPlayerWaterHandSplashAsset;

	UPROPERTY(EditAnywhere)
		UNiagaraSystem* NiagaraPlayerWaterFootSplashAsset;

	UPROPERTY(EditAnywhere)
		UNiagaraSystem* NiagaraPlayerWaterLargePlayerSplashAsset;

	UPROPERTY(EditAnywhere)
		UNiagaraSystem* NiagaraPlayerWaterBoostAsset;
		*/
	UPROPERTY(EditAnywhere)
		FName FootSplashLeftSocketName;

	UPROPERTY(EditAnywhere)
		FName FootSplashRightSocketName;

	UPROPERTY(EditAnywhere)
		UFXSystemComponent* NiagaraPlayerStandingInWater;

	UPROPERTY(EditAnywhere)
		UFXSystemComponent* NiagaraPlayerSwimmingInWater;

	UPROPERTY(EditAnywhere)
		UFXSystemComponent* NiagaraPlayerHandSplashInWater;

	UPROPERTY(EditAnywhere)
		UFXSystemComponent* NiagaraPlayerFootSplashInWaterLeft;

	UPROPERTY(EditAnywhere)
		UFXSystemComponent* NiagaraPlayerFootSplashInWaterRight;

	UPROPERTY(EditAnywhere)
		UFXSystemComponent* NiagaraPlayerJumpSplashInWater;

	UPROPERTY(EditAnywhere)
		UFXSystemComponent* NiagaraPlayerWaterBoost;

	UPROPERTY(EditAnywhere)
		bool bWaterFootSplashActive;

	UPROPERTY(EditAnywhere)
		bool bEnableWaterInteractionEffects;

	//UPROPERTY(EditAnywhere)
		//FMulticastInlineDelegate OnActivateAbility;

//	UPROPERTY(EditAnywhere)
	//	FMulticastInlineDelegate OnFiringRangedWeapon;

	UPROPERTY(EditAnywhere)
		FScalableFloat ConsecutiveWeakSpotResourceBonus;

	UPROPERTY(EditAnywhere)
		FScalableFloat LastHitWeakSpotResourceBonus;

	//UPROPERTY(EditAnywhere)
		//UWidget* CustomInteractionWidget;
};
