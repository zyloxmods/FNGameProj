#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingGameplayActor.h"
#include "BuildingFOBCoreSpawnPad.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class ABuildingFOBCoreSpawnPad : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
    ABuildingFOBCoreSpawnPad();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetCoreSpawnTransform() const;
    
};

