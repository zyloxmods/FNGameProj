#pragma once
#include "CoreMinimal.h"
#include "FortProjectileBase.h"
#include "FortProjectileFallingTrap.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFortProjectileFallingTrap : public AFortProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    AFortProjectileFallingTrap();
};

