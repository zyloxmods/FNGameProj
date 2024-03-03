#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "FortCurieElementBehavior.h"
#include "Templates/SubclassOf.h"
#include "FortCurieElementBehavior_Ice.generated.h"

class AFortCurieBGA;

UCLASS(Abstract, Blueprintable)
class UFortCurieElementBehavior_Ice : public UFortCurieElementBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortCurieBGA> IceBlockActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle IceMagnitudeToFireIntensityDecreaseCurve;
    
public:
    UFortCurieElementBehavior_Ice();
};

