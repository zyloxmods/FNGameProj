// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

/* Taken from https://github.com/SizzyFNBR/FortniteEditor */
#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "AssetTypeCategories.h"
#include "AssetTypeActions_Base.h"
#include "FortniteGame/Public/Items/FortItemDefinition.h"
#include "FortniteEditor/FortniteEditor.h"
#include "IAssetTools.h"
#include "AssetToolsModule.h"
#include "Modules/ModuleManager.h"
#include "FortItemFactory.generated.h"

class FATA_FortItemDefinitionFactory : public FAssetTypeActions_Base {
#if WITH_EDITOR
#define LOCTEXT_NAMESPACE "UMG"
public:
	FATA_FortItemDefinitionFactory(EAssetTypeCategories::Type InAssetCategory) : FortressCategory(InAssetCategory)
	{
	};
	virtual FText GetName() const override { return LOCTEXT("FortItemDefinition", "FortItemDefinition"); }
	virtual uint32 GetCategories() override { return FortressCategory; }
	virtual FColor GetTypeColor() const { return FColor(65, 102, 44); }
	virtual UClass* GetSupportedClass() const override { return UFortItemDefinition::StaticClass(); }

private:
	EAssetTypeCategories::Type FortressCategory;
#undef LOCTEXT_NAMESPACE
#endif
};

/**
 * 
 */
UCLASS()
class FORTNITEEDITOR_API UFortItemFactory : public UFactory
{
	GENERATED_UCLASS_BODY()
	
protected:
	virtual bool IsMacroFactory() const { return false; }

public:

	// Init
	UFortItemFactory();

	/* We are overriding this to create a new asset inside of the Editor and set it's brush */
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};
