#pragma once
#include "CoreMinimal.h"
#include "FortWeaponAdditionalData.h"
#include "FortWeaponAdditionalData_AudioVisualizerData.generated.h"

class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class UFortWeaponAdditionalData_AudioVisualizerData : public UFortWeaponAdditionalData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* AudioVisualizerIconOverride;
    
public:
    UFortWeaponAdditionalData_AudioVisualizerData();
};

