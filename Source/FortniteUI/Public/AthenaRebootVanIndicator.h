#pragma once
#include "CoreMinimal.h"
#include "ESpawnMachineState.h"
#include "AthenaMarkedActorIndicator.h"
#include "AthenaRebootVanIndicator.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaRebootVanIndicator : public UAthenaMarkedActorIndicator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnMachineIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnMachineState SpawnMachineState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnMachineCooldownStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnMachineCooldownEndTime;
    
public:
    UAthenaRebootVanIndicator();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnMachineStateChanged();
    
};

