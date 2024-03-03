#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAthenaCustomTimeDilationManager.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaCustomTimeDilationManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimeDilationCurve;
    
public:
    UFortAthenaCustomTimeDilationManager();
};

