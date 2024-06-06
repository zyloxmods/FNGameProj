// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#include "AssetTypeActions_Base.h"
#include "FortPlaysetItemDefinition.h"

/** @ FFortAssetTypeActions_FortPlaysetItemDefinition implementation */
class FFortAssetTypeActions_FortPlaysetItemDefinition : public FAssetTypeActions_Base {
public:
	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "FortAssetTypeActions_FortPlaysetItemDefinition", "FortPlaysetItemDefinition"); }
	virtual FColor GetTypeColor() const { return FColor(65, 102, 44); }
	virtual UClass* GetSupportedClass() const override { return UFortPlaysetItemDefinition::StaticClass(); }
	virtual uint32 GetCategories() override { return EAssetTypeCategories::Misc; }
};