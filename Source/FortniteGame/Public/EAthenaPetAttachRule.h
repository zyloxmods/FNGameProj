// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EAthenaPetAttachRule.generated.h"

UENUM()
enum class EAthenaPetAttachRule : uint8
{
	AttachToBackpack = 0,
	AttachToBody = 1,
	EAthenaPetAttachRule_MAX = 2,
};