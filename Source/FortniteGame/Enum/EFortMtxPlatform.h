#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortMtxPlatform : uint8 
{
	PSN,
	Live,
	Shared,
	EpicPC,
	EpicPCKorea,
	IOSAppStore,
	EpicAndroid,
	Nintendo,
	WeGame,
	Samsung,
	GooglePlay,
	EFortMtxPlatform_MAX,
};
