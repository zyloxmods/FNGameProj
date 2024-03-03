#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GameplayTagContainer.h"
#include "FortPlayerCustomizable.h"
#include "FortGameplayMutator.generated.h"

class UFortMutatorListComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameplayMutator : public AInfo, public IFortPlayerCustomizable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bMutatorActive, meta=(AllowPrivateAccess=true))
    uint8 bMutatorActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNetworkDormantWhenDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTagContainer;
    
public:
    AFortGameplayMutator();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetMutatorActive(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bMutatorActive();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMutatorActive() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMutatorListPropertiesApplied(UFortMutatorListComponent* MutatorList);
    
    
    // Fix for true pure virtual functions not being implemented
};

