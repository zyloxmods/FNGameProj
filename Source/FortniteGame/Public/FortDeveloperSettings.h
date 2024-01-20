#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "FortDeveloperSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class FORTNITEGAME_API UFortDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UFortDeveloperSettings();
};

