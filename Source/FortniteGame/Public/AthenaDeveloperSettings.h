#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "AthenaDeveloperSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class FORTNITEGAME_API UAthenaDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UAthenaDeveloperSettings();
};

