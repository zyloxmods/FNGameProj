// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FortniteGame/FortniteGame.h"
#include "../Athena/Items/AthenaCosmeticItemDefinition.h"
#include "FortAnimNotifyState.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class FORTNITEGAME_API UFortAnimNotifyState : public UAnimNotify
{
	GENERATED_BODY()
	
public:
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortAnimNotifyState_EmoteSound : public UAnimNotifyState
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USoundBase* EmoteSound1P;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USoundBase* EmoteSound3P;

	UPROPERTY(EditAnywhere)
		bool bPrimarySound;

	UPROPERTY(EditAnywhere)
		FName SoundName;

	UPROPERTY(EditAnywhere)
		float FadeOutTime;

	UPROPERTY(EditAnywhere)
		bool CopyrightedAudio;

	UPROPERTY(EditAnywhere)
		bool bStopAudioOnNotifyEnd;

};
USTRUCT(BlueprintType)
struct FORTNITEGAME_API FEmoteRetargetingNotifyParameters
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	  EFortPlayerAnimBodyType BodyTypeToAffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	  EFortHandIKOverrideType LeftHandIK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	  EFortHandIKOverrideType RightHandIK; 
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortAnimNotifyState_EmoteRetargeting : public UAnimNotifyState
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	 TArray<FEmoteRetargetingNotifyParameters> EmoteParameters;

};
USTRUCT(BlueprintType)
struct FORTNITEGAME_API FEmotePropMaterialScalarParam 
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	FName ParamName;

	UPROPERTY(EditAnywhere)
	float ParamValue;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortAnimNotifyState_SpawnProp : public UAnimNotifyState
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		FName SocketName;

	UPROPERTY(EditAnywhere)
		FVector LocationOffset;

	UPROPERTY(EditAnywhere)
		FRotator RotationOffset;

	UPROPERTY(EditAnywhere)
		FVector Scale;

	UPROPERTY(EditAnywhere)
		AActor* ActorProp;

	UPROPERTY(EditAnywhere)
		USkeletalMesh* SkeletalMeshProp;

	UPROPERTY(EditAnywhere)
		UAnimationAsset* SkeletalMeshPropAnimation;

	UPROPERTY(EditAnywhere)
		UAnimInstance* SkeletalMeshPropAnimClass;

	UPROPERTY(EditAnywhere)
		bool bInheritScale;

	UPROPERTY(EditAnywhere)
		bool bAbsoluteScale;

	UPROPERTY(EditAnywhere)
		bool bUseAttachParentBound;

	UPROPERTY(EditAnywhere)
		bool bPropAnimLooping;

	UPROPERTY(EditAnywhere)
		bool bSyncMontage;

	UPROPERTY(EditAnywhere)
		bool bPrestreamTextures;

	UPROPERTY(EditAnywhere)
		float PrestreamTextureDuration;

	UPROPERTY(EditAnywhere)
		UStaticMesh* StaticMeshProp;

	UPROPERTY(EditAnywhere)
		TArray<FEmotePropMaterialScalarParam> PropMaterialScalarParams;

	UPROPERTY(EditAnywhere)
		int PropId;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAthenaCosmeticItemDefinition> VariantsCosmeticItemDef;

	UPROPERTY(EditAnywhere)
		bool bApplyVariantsToSpawnedItems;

	UPROPERTY(EditAnywhere)
		bool bTrackComponentPropInGC;

	UPROPERTY(EditAnywhere)
		TMap<UMeshComponent*, UMeshComponent*> PersistComponents;

};