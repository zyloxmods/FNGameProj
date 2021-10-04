// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EMontageVisibilityRule.generated.h"


UENUM()
enum class EMontageVisibilityRule : uint8
{
	RequiredItem = 0,
	ForbiddenItem = 1,
	EMontageVisibilityRule_MAX = 2,
};

