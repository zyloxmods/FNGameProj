#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "CosmeticDeveloperSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class UCosmeticDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UCosmeticDeveloperSettings();
};

