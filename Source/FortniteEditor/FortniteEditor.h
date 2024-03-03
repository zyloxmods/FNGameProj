// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UnrealEd.h"
#include "AssetTypeCategories.h"

DECLARE_LOG_CATEGORY_EXTERN(LogFortEditor, All, All)

class FFortniteEditor : public IModuleInterface
{
public:
	virtual void StartupModule() override;
};

class FFortEditorToolInterface : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};