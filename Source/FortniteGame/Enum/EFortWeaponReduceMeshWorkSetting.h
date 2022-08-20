#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortWeaponReduceMeshWorkSetting : uint8 
{
	DontReduceWork,
	HandledInAnimInstance,
	EFortWeaponReduceMeshWorkSetting_MAX,
};
