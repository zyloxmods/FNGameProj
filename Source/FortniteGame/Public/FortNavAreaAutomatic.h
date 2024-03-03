#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "FortNavArea.h"
#include "FortNavAreaAutomatic.generated.h"

UCLASS(Blueprintable)
class UFortNavAreaAutomatic : public UFortNavArea {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle NavCostCurveHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavAreaStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AutomaticNavCost;
    
public:
    UFortNavAreaAutomatic();
};

