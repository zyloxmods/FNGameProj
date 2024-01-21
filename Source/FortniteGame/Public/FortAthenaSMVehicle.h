#pragma once
#include "CoreMinimal.h"
#include "FortAthenaVehicle.h"
#include "FortAthenaSMVehicle.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFortAthenaSMVehicle : public AFortAthenaVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    AFortAthenaSMVehicle();
};

