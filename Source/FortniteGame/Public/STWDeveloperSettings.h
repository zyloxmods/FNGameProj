#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "STWDeveloperSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class USTWDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    USTWDeveloperSettings();
};

