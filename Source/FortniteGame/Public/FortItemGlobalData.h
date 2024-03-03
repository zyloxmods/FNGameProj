#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "Engine/DataTable.h"
#include "Engine/DataAsset.h"
#include "FortItemGlobalData.generated.h"

UCLASS(Blueprintable)
class UFortItemGlobalData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RarityToMaxLevel[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle RarityToFusionXPCurveTableRow[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle LevelUpXPCostCurveTableRow;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RarityUpgradeRecipes[8];
    
public:
    UFortItemGlobalData();
};

