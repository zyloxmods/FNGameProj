#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PetStimuliRepData.generated.h"

USTRUCT(BlueprintType)
struct FPetStimuliRepData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Stimuli;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameTimeEnd;
    
    FORTNITEGAME_API FPetStimuliRepData();
};

