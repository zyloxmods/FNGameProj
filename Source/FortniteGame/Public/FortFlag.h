#pragma once
#include "CoreMinimal.h"
#include "FortCarriedObject.h"
#include "FortFlag.generated.h"

class UCapsuleComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFortFlag : public AFortCarriedObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FlagMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CollisionComp;
    
public:
    AFortFlag();
};

