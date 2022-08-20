#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EWardAffectType : uint8 
{
	AffectsOnlyStartPoints,
	AffectsOnlyEndPoints,
	EWardAffectType_MAX,
};
