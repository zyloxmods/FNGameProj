#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnFortAthenaVehicleFuelChangedDelegate.h"
#include "OnFortAthenaVehicleLowFuelDelegate.h"
#include "OnFortAthenaVehicleOutOfFuelDelegate.h"
#include "OnFortAthenaVehicleRefueledFromEmptyDelegate.h"
#include "FortAthenaVehicleFuelComponent.generated.h"

class AFortAthenaVehicle;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortAthenaVehicleFuelComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFortAthenaVehicleFuelChanged OnFuelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFortAthenaVehicleRefueledFromEmpty OnRefueledFromEmpty;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFortAthenaVehicleOutOfFuel OnOutOfFuel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFortAthenaVehicleLowFuel OnLowFuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldInitializeWithStartingFuel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaVehicle* OwnerVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ServerFuel, meta=(AllowPrivateAccess=true))
    float ServerFuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* OutOfFuelSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LowFuelSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LowFuelRepeatingPing;
    
public:
    UFortAthenaVehicleFuelComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerFuel(float PreviousFuel);
    
};

