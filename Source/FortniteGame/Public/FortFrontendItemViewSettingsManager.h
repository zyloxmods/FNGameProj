#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFrontEndCamera.h"
#include "ESubGame.h"
#include "FortItemViewSettings.h"
#include "FortFrontendItemViewSettingsManager.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortFrontendItemViewSettingsManager : public UObject {
    GENERATED_BODY()
public:
    UFortFrontendItemViewSettingsManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FFortItemViewSettings GetItemViewSettings(const EFrontEndCamera Camera, const ESubGame GameMode, const UFortItemDefinition* ItemDefinition, const int32 SubslotIndex) const;
    
};

