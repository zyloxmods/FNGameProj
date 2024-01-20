#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortGameplayModMagnitudeCalculation.h"
#include "PlayerTrapBonusModMagnitudeCalculation.generated.h"

UCLASS(Blueprintable)
class UPlayerTrapBonusModMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttributeDefaultValue;
    
public:
    UPlayerTrapBonusModMagnitudeCalculation();
};

