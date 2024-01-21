// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AthenaBackpackItemDefinition.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "Customization/BaseVariantDef.h"
#include "AthenaGliderItemDefinition.generated.h"

/**
 * 
 */

USTRUCT()
struct FFortAnimInput_PlayerGliderAnimAsset
{

	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	UBlendSpace*                                 Default_Base_BS;

	UPROPERTY(EditAnywhere)
	class UBlendSpace*                                 Default_BodyAdditive_MaleMedium_BS;

	UPROPERTY(EditAnywhere)
	class UBlendSpace*                                 Default_BodyAdditive_MaleLarge_BS;

	UPROPERTY(EditAnywhere)
	class UBlendSpace*                                 Default_BodyAdditive_FemaleSmall_BS;

	UPROPERTY(EditAnywhere)
	class UBlendSpace*                                 Default_BodyAdditive_FemaleMedium_BS;

	UPROPERTY(EditAnywhere)
	class UBlendSpace*                                 Default_BodyAdditive_FemaleLarge_BS;

	UPROPERTY(EditAnywhere)
	class UBlendSpace*                                 Default_TurnAdditive_MaleMedium_BS;

	UPROPERTY(EditAnywhere)
	class UBlendSpace*                                 Default_TurnAdditive_MaleLarge_BS;

	UPROPERTY(EditAnywhere)
	class UBlendSpace*                                 Default_TurnAdditive_FemaleSmall_BS;

	UPROPERTY(EditAnywhere)
	class UBlendSpace*                                 Default_TurnAdditive_FemaleMedium_BS;

	UPROPERTY(EditAnywhere)
	class UBlendSpace*                                 Default_TurnAdditive_FemaleLarge_BS;
/* To do
	UPROPERTY(EditAnywhere)
	class UBlendSpace*                                 Into_Base_BS;                                            
	class UBlendSpace*                                 Into_Base_MaleMedium_BS;                                  // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 Into_BodyAdditive_MaleMedium_BS;                          // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 Into_BodyAdditive_MaleLarge_BS;                           // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 Into_BodyAdditive_FemaleSmall_BS;                         // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 Into_BodyAdditive_FemaleMedium_BS;                        // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 Into_BodyAdditive_FemaleLarge_BS;                         // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 Into_TurnAdditive_MaleMedium_BS;                          // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 Into_TurnAdditive_MaleLarge_BS;                           // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 Into_TurnAdditive_FemaleSmall_BS;                         // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 Into_TurnAdditive_FemaleMedium_BS;                        // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 Into_TurnAdditive_FemaleLarge_BS;                         // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 Lean_MaleMedium_BS;                                       // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 Lean_MaleLarge_BS;                                        // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 Lean_FemaleSmall_BS;                                      // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 Lean_FemaleMedium_BS;                                     // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 Lean_FemaleLarge_BS;                                      // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               LeanAdditive_Center_MaleMedium_Pose;                      // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               LeanAdditive_Center_MaleLarge_Pose;                       // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               LeanAdditive_Center_FemaleSmall_Pose;                     // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               LeanAdditive_Center_FemaleMedium_Pose;                    // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               LeanAdditive_Center_FemaleLarge_Pose;                     // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 LeanAdditive_Into_BS;                                     // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               LeanAdditive_ForwardInto_Anim;                            // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               LeanAdditive_ForwardInto_FromDeploy_Anim;                 // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               LeanAdditive_BackInto_Anim;                               // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               LeanAdditive_LeftInto_Anim;                               // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               LeanAdditive_RightInto_Anim;                              // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               LeanAdditive_ForwardOut_Anim;                             // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               LeanAdditive_BackOut_Anim;                                // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               LeanAdditive_LeftOut_Anim;                                // 0x0148(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               LeanAdditive_RightOut_Anim;                               // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 ToGlide_BS;                                               // 0x0158(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 ToGlide_Lean_BS;                                          // 0x0160(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 ToDive_BS;                                                // 0x0168(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 ToDive_Lean_BS;                                           // 0x0170(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 Dive_WeaponR_Additive_BS;                                 // 0x0178(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UAnimSequence*                               Glide_WeaponR_Additive_Anim;                              // 0x0180(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 GenericAdditive_Male_BS;                                  // 0x0188(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBlendSpace*                                 GenericAdditive_Female_BS;                                // 0x0190(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              RootModPitchMin;                                          // 0x0198(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RootModPitchMax;                                          // 0x019C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RootModYOffsetMin;                                        // 0x01A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RootModYOffsetMax;                                        // 0x01A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FPelvisMod_VerticalInput_Spring             PelvisModVertical;                                        // 0x01A8(0x0014) (Edit, BlueprintVisible)
	struct FPelvisMod_LateralInput_Spring              PelvisModLateral;                                         // 0x01BC(0x001C) (Edit, BlueprintVisible)
	struct FPelvisMod_BankAngleInput_Spring            PelvisModBankAngle;                                       // 0x01D8(0x0024) (Edit, BlueprintVisible)
	struct FThighMod_LegAngleInput                     ThighModLegAngle;                                         // 0x01FC(0x0018) (Edit, BlueprintVisible)
	struct FThighMod_LegPitchSpring                    ThighModLegPitch;                                         // 0x0214(0x0014) (Edit, BlueprintVisible)
	struct FThighMod_LegBankSpring                     ThighModLegBank;                                          // 0x0228(0x0014) (Edit, BlueprintVisible)
	struct FThighMod_LeftLegDrag                       ThighModLeftLegDrag;                                      // 0x023C(0x0008) (Edit, BlueprintVisible)
	EGliderType                                        PlayerGliderType;                                         // 0x0244(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSpringMods;                                        // 0x0245(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPlayerDeployRootMod;                                // 0x0246(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSurfStyle;                                            // 0x0247(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLeanPlayRateAdjust;                                   // 0x0248(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseForwardAs_Y_BS;                                       // 0x0249(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDeployCurveForIntoPlayRateAdjust;                     // 0x024A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x024B(0x0001) MISSED OFFSET
	float                                              LeanForwardValue;                                         // 0x024C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IdleValue;                                                // 0x0250(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeanBackValue;                                            // 0x0254(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IdleInterpToSpeed;                                        // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeanForwardInterpToSpeed;                                 // 0x025C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeanBackInterpToSpeed;                                    // 0x0260(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0264(0x0004) MISSED OFFSET*/
};

USTRUCT()
struct FGliderTrailParticleDefinition
{

	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UNiagaraSystem> NiagaraSystem;

	UPROPERTY(EditAnywhere)
	 FName EffectSocket;                                            

	UPROPERTY(EditAnywhere)
	 FTransform Offset;                                                 
	
	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	EGliderTrailActivationMode ActivationMode;                                           

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	EGliderTrailAttachmentMode AttachmentMode;                                         

};

USTRUCT()
struct FFortTagToGliderAnimSetPair
{

	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	 FGameplayTag                                MatchingTag;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly)
	
	UPROPERTY(EditAnywhere)
	 FFortAnimInput_PlayerGliderAnimAsset        OverrideAnimAsset;                                        // 0x0008(0x0268) (Edit, BlueprintVisible, BlueprintReadOnly)
};


UCLASS()
class UFortPlayerGliderAnimSet : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	 FFortAnimInput_PlayerGliderAnimAsset AnimAsset;

	UPROPERTY(EditAnywhere)
	TArray<FFortTagToGliderAnimSetPair> OverrideAnimAssets;

};

USTRUCT()
struct FFortSwapItemAndVariantData
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	UFortItemDefinition* Item;                                                     

	UPROPERTY(EditAnywhere)
	TArray<FMcpVariantChannelInfo> ChannelInfoList;                                        
};

USTRUCT()
struct FFortCosmeticDependentSwapData
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TArray<FCosmeticMetaTagCondition> SwapRequirements;                                       

	UPROPERTY(EditAnywhere)
	TArray<FFortSwapItemAndVariantData> SwapData;                                              

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	EFortAppliedSwapItemAndVariantState ForcedSwapState;                                       

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 FGuid SwapId;                                                
};

USTRUCT()
struct FFortGliderLayeredAudioOneshotGate
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USoundBase> SoundRef;                                      

	UPROPERTY(EditAnywhere)
	float GateValue = 0.0f;                                               

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	ELayeredAudioTriggerDir Direction;                                                

	UPROPERTY(EditAnywhere)
	bool FadeWhenOutsideGate = false;                                     

	UPROPERTY(EditAnywhere)
	float MinTimeSinceTrigger = 0.0f;                                     

	UPROPERTY(EditAnywhere)
	float InterruptFadeTime = 0.0f;                                        
};

USTRUCT()
struct FFortGliderLayeredAudioFloatParam
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	ELayeredAudioInterpolationType InterpType;     

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
     UCurveFloat*  Curve;                                                  

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	float AttackSpeed;                                        

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	float ReleaseSpeed;                                             

	UPROPERTY(EditAnywhere)
	TArray<FFortGliderLayeredAudioOneshotGate> Oneshots;                                                
};
USTRUCT()
struct FGliderBitsDefinition
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USkeletalMesh> Mesh;                                     

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UObject> AnimBPClass;                          

	UPROPERTY(EditAnywhere)
	TArray<FMaterialVariants> OverrideMaterials;                                      

	UPROPERTY(EditAnywhere)
	 FTransform RelativeTransform;                                      

	UPROPERTY(EditAnywhere)
	 FName SocketName;                                              

	UPROPERTY(EditAnywhere)
	bool bApplyGliderMaterialOverrides;                           
};

UCLASS()
class FORTNITEGAME_API UAthenaGliderItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
     EFortGliderType GliderType;

	UPROPERTY(EditAnywhere)
	 FVector CameraFramingBoundsCenterOffset;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UObject> ParachutePrefabClass;                          

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh;

	UPROPERTY(EditAnywhere)
	 FTransform GliderMeshTransform;                                      

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UObject> AnimClass;
	
	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UObject> CameraClass;                                     

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UFortPlayerGliderAnimSet> PlayerAnimSet;
	
	UPROPERTY(EditAnywhere)
	 FName AttachSocket;

	UPROPERTY(EditAnywhere)
	TArray<FGliderTrailParticleDefinition> TrailEffectDefinitions;

	UPROPERTY(EditAnywhere)
	TArray<FFortCosmeticDependentSwapData> GlidingSwaps;

	UPROPERTY(EditAnywhere)
	FName DeployEffectTagName;

	UPROPERTY(EditAnywhere)
	bool CleanUpDeployEffect;

	UPROPERTY(EditAnywhere)
	FName UserSkeletonParameterName;                               

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USoundBase> OpenSound;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USoundBase> CloseSound;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USoundBase> ThrustLoopSound;

	UPROPERTY(EditAnywhere)
	TMap<ELayeredAudioTriggerDirection, FFortGliderLayeredAudioFloatParam> ThrustSoundParams;

	UPROPERTY(EditAnywhere)
	bool bShouldHideBackbling = false;                                  

	UPROPERTY(EditAnywhere)
	TArray<TSoftObjectPtr<UAthenaBackpackItemDefinition>> BackblingsToExcludeFromHiding;                                      

	UPROPERTY(EditAnywhere)
	 FGameplayTagContainer BackblingSetsToExcludeFromHiding; 

	UPROPERTY(EditAnywhere)
	TArray<FGliderBitsDefinition> Bits; 

	UPROPERTY(EditAnywhere)
	 FFortCosmeticOverlayMaterialData OverlayMaterialData;                                     

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UParticleSystem> TrailParticles;                                      

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UParticleSystem> OwnerTrailParticles;                                      

	UPROPERTY(EditAnywhere)
	bool bActivateTrailsOnRotationalMovement;
	
	UPROPERTY(EditAnywhere)
	 FName TrailParamName;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UParticleSystem> TrailEffect;                                     

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UNiagaraSystem> TrailEffectNiagara;                                                                        

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UParticleSystem> TrailEffect2;                                      

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UNiagaraSystem> TrailEffectNiagara2; 

	UPROPERTY(EditAnywhere)
	bool bAttachNiagaraEffectToPlayerPawn;

	UPROPERTY(EditAnywhere)
	bool bAutoActivate;
};
