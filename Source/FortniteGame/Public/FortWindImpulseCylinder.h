#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortWindImpulseCylinderRadial.h"
#include "FortWindImpulseCylinder.generated.h"

USTRUCT(BlueprintType)
struct FFortWindImpulseCylinder : public FFortWindImpulseCylinderRadial {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WindDirection;
    
public:
    FORTNITEGAME_API FFortWindImpulseCylinder();
};

