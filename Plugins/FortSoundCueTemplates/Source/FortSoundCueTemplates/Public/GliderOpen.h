// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SoundCueTemplate.h"
#include "FortSoundCueTemplateBase.h"
#include "GliderOpen.generated.h"

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UGliderOpen : public UFortSoundCueTemplateSimple
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};
