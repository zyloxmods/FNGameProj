// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

/* Taken from https://github.com/SizzyFNBR/FortniteEditor */
#include "FortniteEditor/Public/Factories/FortItemFactory.h"
//#include "FortniteGame/Public/Weapons/Data/FortWeaponRangedItemDefinition.h"
#include "AssetTypeCategories.h"

UFortItemFactory::UFortItemFactory(const class FObjectInitializer &OBJ) : Super(OBJ) {
	SupportedClass = UFortItemDefinition::StaticClass();
	bEditAfterNew = true;
	bCreateNew = true;
}

UObject* UFortItemFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	// Creating an item inside of the editor
	check(InClass->IsChildOf(UFortItemDefinition::StaticClass()));
	return NewObject<UFortItemDefinition>(InParent, InClass, InName, Flags | RF_Transactional, Context);
}