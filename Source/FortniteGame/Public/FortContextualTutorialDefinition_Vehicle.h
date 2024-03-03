#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortContextualTutorialDefinition.h"
#include "FortContextualTutorialDefinition_Vehicle.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortContextualTutorialDefinition_Vehicle : public UFortContextualTutorialDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VehicleTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VehicleActionTag;
    
public:
    UFortContextualTutorialDefinition_Vehicle();
};

