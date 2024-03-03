#pragma once
#include "CoreMinimal.h"
#include "ConstructionBuildingList.h"
#include "FortAthenaAISpawnerDataComponent_ConstructionBase.h"
#include "FortAthenaAISpawnerDataComponent_AIBotConstruction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_AIBotConstruction : public UFortAthenaAISpawnerDataComponent_ConstructionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstructionBuildingList ConstructionBuildingInfoList;
    
public:
    UFortAthenaAISpawnerDataComponent_AIBotConstruction();
};

