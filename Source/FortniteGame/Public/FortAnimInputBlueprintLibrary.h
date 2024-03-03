#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAnimInput_SpeedWarping.h"
#include "FortAnimInputBlueprintLibrary.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class UFortAnimInputBlueprintLibrary : public UObject {
    GENERATED_BODY()
public:
    UFortAnimInputBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdateFortAnimInput_SpeedWarping(const FFortAnimInput_SpeedWarping& AnimInput, UAnimInstance* InAnimInstance, float InSpeedScale);
    
};

