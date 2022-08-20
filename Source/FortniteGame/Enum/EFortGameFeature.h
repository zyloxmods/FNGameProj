#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortGameFeature : uint8 
{
	DedicatedServer,
	KairosInitial,
	KairosCapture,
	KairosLoadElectraPlayer,
	DanceRoyale,
	Frontend,
	GameplayAthena,
	GameplayCampaignTutorial,
	GameplayCampaign,
	GameplayCreative,
	Invalid,
	Count,
	EFortGameFeature_MAX,
};
