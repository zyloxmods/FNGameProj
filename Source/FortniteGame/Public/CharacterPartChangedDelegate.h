#pragma once
#include "CoreMinimal.h"
#include "EFortCustomPartType.h"
#include "CharacterPartChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterPartChanged, EFortCustomPartType, PartType);

