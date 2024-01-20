#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PetStimuliResponse.generated.h"

USTRUCT(BlueprintType)
struct FPetStimuliResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ResponseTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResponseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResponseWeight;
    
    FORTNITEGAME_API FPetStimuliResponse();
};

