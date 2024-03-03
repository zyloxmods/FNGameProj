#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator_Movement.h"
#include "FortAthenaNpcEvaluator_Leash.generated.h"

UCLASS(Blueprintable)
class UFortAthenaNpcEvaluator_Leash : public UFortAthenaAIBotEvaluator_Movement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeashKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeashMovementStateKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeashDestinationKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeashLocationKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeashOuterRadiusKeyName;
    
public:
    UFortAthenaNpcEvaluator_Leash();
};

