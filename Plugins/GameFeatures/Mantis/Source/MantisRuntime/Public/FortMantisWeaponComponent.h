#pragma once
#include "CoreMinimal.h"
#include "FortWeaponComponent.h"
#include "FortMantisWeaponComponent.generated.h"

class UFortMantisData;
class UFortMantisPawnComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortMantisWeaponComponent : public UFortWeaponComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMantisData* MantisData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMantisPawnComponent* MantisPawnComponent;
    
public:
    UFortMantisWeaponComponent();
};

