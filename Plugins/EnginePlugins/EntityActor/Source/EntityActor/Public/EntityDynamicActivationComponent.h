#pragma once
#include "CoreMinimal.h"
#include "EntityEnableableComponent.h"
#include "EntityDynamicActivationComponent.generated.h"

class UEntityComponent;

UCLASS(Blueprintable)
class ENTITYACTOR_API UEntityDynamicActivationComponent : public UEntityEnableableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TransitionTarget, meta=(AllowPrivateAccess=true))
    float TransitionTargetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TransitionTarget, meta=(AllowPrivateAccess=true))
    bool bTargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEntityComponent*> LinkedComponents;
    
public:
    UEntityDynamicActivationComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TransitionTarget();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEnabledChanged(bool bIsEnabled);
    
};

