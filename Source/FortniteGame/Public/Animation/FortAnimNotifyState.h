// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FortniteGame/FortniteGame.h"
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
class UFortAnimNotifyState_EmoteSound : public UAnimNotifyState
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
struct FEmoteRetargetingNotifyParameters 
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest))
	  EFortPlayerAnimBodyType BodyTypeToAffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest))
	  EFortHandIKOverrideType LeftHandIK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest))
	  EFortHandIKOverrideType RightHandIK; 
};

UCLASS(BlueprintType)
class UFortAnimNotifyState_EmoteRetargeting : public UAnimNotifyState 
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	 TArray<FEmoteRetargetingNotifyParameters> EmoteParameters;

};