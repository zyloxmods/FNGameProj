#pragma once
#include "CoreMinimal.h"
#include "FortAthenaJackalVehicle.h"
#include "NetTowhookAttachState.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaWaterJackal.generated.h"

class UFortAthenaWaterJackalConfigs;

UCLASS(Blueprintable)
class AFortAthenaWaterJackal : public AFortAthenaJackalVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaWaterJackalConfigs> FortWaterJackalVehicleConfigsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaWaterJackalConfigs* FortWaterJackalVehicleConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedAttachState, meta=(AllowPrivateAccess=true))
    FNetTowhookAttachState ReplicatedAttachState;
    
public:
    AFortAthenaWaterJackal();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAttachState();
    
};

