// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AnimationSharingManager.h"
#include "AssetTypeCategories.h"
#include "AssetTypeActions_Base.h"

class FAssetTypeActions_AnimationSharingSetup : public FAssetTypeActions_Base
{
public:
	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_AnimationSharingSetup", "AnimationSharingSetup"); }
	virtual FColor GetTypeColor() const override { return FColor(255, 10, 255); }
	virtual UClass* GetSupportedClass() const override { return UAnimationSharingManager::StaticClass(); }	
	virtual uint32 GetCategories() override { return EAssetTypeCategories::Animation; }
};
