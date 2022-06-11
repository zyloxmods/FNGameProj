// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
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
