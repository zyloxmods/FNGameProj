#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "VehiclePlacementInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FVehiclePlacementInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> PlacementActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle AppliedGameplayEffectHandle;
    
    FORTNITEGAME_API FVehiclePlacementInfo();
};

