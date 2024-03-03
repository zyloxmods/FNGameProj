#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortMissionConfigData.h"
#include "FortMissionOutpostConfigData.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortMissionOutpostConfigData : public UFortMissionConfigData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DifficultyData;
    
    UFortMissionOutpostConfigData();
};

