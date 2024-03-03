#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "FortMobileHUDPreset.h"
#include "FortMobileHUDPresetContainer.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortMobileHUDPresetContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HUDPresetContainerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMobileHUDPreset> HUDProfilePresets;
    
public:
    UFortMobileHUDPresetContainer();
};

