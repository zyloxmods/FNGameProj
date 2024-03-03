#pragma once
#include "CoreMinimal.h"
#include "FortEncounterSettings.h"
#include "FortEncounterSettingsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortEncounterSettingsDelegate, const FFortEncounterSettings&, EncounterSettings);

