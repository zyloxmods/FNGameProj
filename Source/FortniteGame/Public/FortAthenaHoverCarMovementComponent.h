#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SimpleWheeledVehicleMovementComponent.h"
#include "ReplicatedAthenaVehicleState.h"
#include "FortAthenaHoverCarMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAthenaHoverCarMovementComponent : public USimpleWheeledVehicleMovementComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FReplicatedAthenaVehicleState ReplicatedAthenaState;
    
public:
    UFortAthenaHoverCarMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateAthenaState(float InThrottleInput, float InSteeringInput, const FVector InForwardVectorTarget);
    
};

