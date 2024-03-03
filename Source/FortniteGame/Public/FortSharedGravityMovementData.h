#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GravityMovementData.h"
#include "FortSharedGravityMovementData.generated.h"

UCLASS(Blueprintable)
class UFortSharedGravityMovementData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGravityMovementData> GravityData;
    
    UFortSharedGravityMovementData();
};

