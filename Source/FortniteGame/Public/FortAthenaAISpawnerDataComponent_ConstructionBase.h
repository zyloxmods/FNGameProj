#pragma once
#include "CoreMinimal.h"
#include "ConstructionBuildingList.h"
#include "FortAthenaAISpawnerDataComponent.h"
#include "FortAthenaAISpawnerDataComponent_ConstructionBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_ConstructionBase : public UFortAthenaAISpawnerDataComponent {
    GENERATED_BODY()
public:
    UFortAthenaAISpawnerDataComponent_ConstructionBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetConstructionBuildingInfo(FConstructionBuildingList& OutConstructionInfoList) const;
    
};

