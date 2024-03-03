#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnMarshalledComponentsCreated_BPDelegate.h"
#include "FortAsyncAction_WaitManagedParticles.generated.h"

class UFortAsyncAction_WaitManagedParticles;
class UObject;

UCLASS(Blueprintable)
class UFortAsyncAction_WaitManagedParticles : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarshalledComponentsCreated_BP OnComponentsReady;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* MyContext;
    
public:
    UFortAsyncAction_WaitManagedParticles();
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_WaitManagedParticles* SpawnManagedParticlesWithCallback(UObject* ParticleOwner);
    
};

