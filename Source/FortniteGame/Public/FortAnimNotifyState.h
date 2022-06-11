// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Sound/SoundNode.h"
#include "FortAnimNotifyState.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class UFortAnimNotifyState_EmoteSound : public UAnimNotifyState
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		USoundBase* EmoteSound1P;

	UPROPERTY(EditAnywhere)
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

UENUM()
enum class EFortHandIKOverrideType : uint8
{
	ForceFK = 1,
	ForceIK = 2,
	ForceFKSnap = 3,
	EFortHandIKOverrideType_MAX = 4
};

UENUM()
enum class EFortPlayerAnimBodyType : uint8
{
	Medium = 1,
	Large = 2,
	All = 3,
	EFortPlayerAnimBodyType_MAX = 4
};

USTRUCT(BlueprintType)
struct FEmoteRetargetingNotifyParameters
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		EFortPlayerAnimBodyType BodyTypeToAffect;

	UPROPERTY(EditAnywhere)
		EFortHandIKOverrideType LeftHandIK;

	UPROPERTY(EditAnywhere)
		EFortHandIKOverrideType RightHandIK;

};

UCLASS(BlueprintType)
class UFortAnimNotifyState_EmoteRetargeting : public UAnimNotifyState
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TArray<FEmoteRetargetingNotifyParameters> EmoteParameters;

};

UCLASS(BlueprintType)
class UFortSoundNodeLicensedContentSwitcher : public USoundNode
{

	GENERATED_BODY()

public:

};

