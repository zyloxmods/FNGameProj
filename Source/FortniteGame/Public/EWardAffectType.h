#pragma once
#include "CoreMinimal.h"
#include "EWardAffectType.generated.h"

UENUM(BlueprintType)
enum class EWardAffectType : uint8 {
    AffectsBothStartAndEndPoints,
    AffectsOnlyStartPoints,
    AffectsOnlyEndPoints,
};

