// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SoundCueTemplate.h"
#include "FortSoundCueTemplateBase.generated.h"


UCLASS(hidecategories = object, BlueprintType)
class FORTSOUNDCUETEMPLATES_API UFortSoundCueTemplateBase : public USoundCueTemplate
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};

USTRUCT()
struct FGliderThrustData 
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	 FName ParameterName;        

	UPROPERTY(EditAnywhere)
	 FVector2D PitchOutput;    

	UPROPERTY(EditAnywhere)
	 FVector2D VolumeOutput;      

	UPROPERTY(EditAnywhere)
	 USoundWave* Sound;                                           
};

