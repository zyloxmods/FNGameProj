#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "OceanCollisionComponent.generated.h"

class UBodySetup;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API UOceanCollisionComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    UBodySetup* CachedBodySetup;
    
public:
    UOceanCollisionComponent();
};

