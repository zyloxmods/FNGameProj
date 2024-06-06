// Copyright 1998-2024 Epic Games, Inc. All Rights Reserved.
#include "AssetTypeActions_Base.h"
#include "FortConversation.h"

/** @ FFortAssetTypeActions_FortConversation implementation */
class FFortAssetTypeActions_FortConversation : public FAssetTypeActions_Base {
public:
	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "FortAssetTypeActions_FortConversation", "FortConversation"); }
	virtual FColor GetTypeColor() const { return FColor(114, 178, 19); }
	virtual UClass* GetSupportedClass() const override { return UFortConversation::StaticClass(); }
	virtual uint32 GetCategories() override { return EAssetTypeCategories::Misc; }
};