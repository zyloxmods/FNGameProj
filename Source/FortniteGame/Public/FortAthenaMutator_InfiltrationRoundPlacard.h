#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_ShowPlacard.h"
#include "InfiltrationRoundInfoMutatorInterface.h"
#include "FortAthenaMutator_InfiltrationRoundPlacard.generated.h"

class UObject;

UCLASS(Blueprintable)
class AFortAthenaMutator_InfiltrationRoundPlacard : public AFortAthenaMutator_ShowPlacard, public IInfiltrationRoundInfoMutatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RoundInfoInterfaceRedirectReplicationObject, meta=(AllowPrivateAccess=true))
    UObject* RoundInfoInterfaceRedirectReplicationObject;
    
public:
    AFortAthenaMutator_InfiltrationRoundPlacard();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RoundInfoInterfaceRedirectReplicationObject();
    
    
    // Fix for true pure virtual functions not being implemented
};

