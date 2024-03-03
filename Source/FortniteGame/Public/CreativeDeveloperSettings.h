#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "CreativeDeveloperSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class UCreativeDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UCreativeDeveloperSettings();
};

