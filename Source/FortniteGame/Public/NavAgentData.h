#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "NavAgentData.generated.h"

USTRUCT(BlueprintType)
struct FNavAgentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AgentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle BuildingActorHealthToNavAreaStrengthHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle PlayerBuiltBuildingActorHealthToNavAreaStrengthHandle;
    
    FORTNITEGAME_API FNavAgentData();
};

