#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplicatedAthenaVehicleState.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedAthenaVehicleState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ForwardVectorTarget;
    
    FORTNITEGAME_API FReplicatedAthenaVehicleState();
};

