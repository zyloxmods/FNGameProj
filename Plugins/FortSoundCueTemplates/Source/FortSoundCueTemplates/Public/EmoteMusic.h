// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SoundCueTemplate.h"
#include "EmoteBase.h"
#include "EmoteMusic.generated.h"

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UEmoteMusic : public UEmoteBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};