// Fill out your copyright notice in the Description page of Project Settings.

/* Taken from https://github.com/SizzyFNBR/FortniteEditor */
#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "UnrealEd.h"
#include "AssetTypeCategories.h"
#include "Styling/SlateStyle.h"

DECLARE_LOG_CATEGORY_EXTERN(LogFortEditor, All, All)

class FortniteEditor : public IModuleInterface
{
public:
	virtual void StartupModule() override;
};