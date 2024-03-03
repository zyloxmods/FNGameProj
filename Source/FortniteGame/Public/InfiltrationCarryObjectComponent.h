#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InfiltrationCarryObjectComponent.generated.h"

class AFortAthenaMutator_Infiltration;
class AInfiltrationCarryObjectSpawnPoint;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInfiltrationCarryObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AInfiltrationCarryObjectSpawnPoint> ParentSpawnPoint;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaMutator_Infiltration> CachedMutator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInteractable;
    
public:
    UInfiltrationCarryObjectComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetDefendingTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetAttackingTeam() const;
    
};

