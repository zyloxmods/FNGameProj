#pragma once
#include "CoreMinimal.h"
#include "CurieElementBehavior.h"
#include "Engine/CurveTable.h"
#include "Engine/DataTable.h"
#include "FortDamageSourceInterface.h"
#include "FortCurieElementBehavior.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortCurieElementBehavior : public UCurieElementBehavior, public IFortDamageSourceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bActAsDmgSrcDirectly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DamageDataTableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle ElementMagnitudeToIntensityInitializationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle ElementMagnitudeToIntensityCurve;
    
public:
    UFortCurieElementBehavior();
    
    // Fix for true pure virtual functions not being implemented
};

