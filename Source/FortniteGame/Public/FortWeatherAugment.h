#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortCarriedObject.h"
#include "FortWeatherAugment.generated.h"

UCLASS(Blueprintable)
class AFortWeatherAugment : public AFortCarriedObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WeatherTags;
    
public:
    AFortWeatherAugment();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetWeatherTags() const;
    
};

