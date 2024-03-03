#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActorConsumable.h"
#include "BuildingGameplayActorLockOnConsumable.generated.h"

class AFortPlayerPawn;

UCLASS(Blueprintable)
class ABuildingGameplayActorLockOnConsumable : public ABuildingGameplayActorConsumable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsBeforeDeathAfterPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PawnInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PawnDisableRotationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InteractingPawn, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* InteractingPawn;
    
    ABuildingGameplayActorLockOnConsumable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractingPawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalControllersInteractingPawnSet(AFortPlayerPawn* LocalPCPawn);
    
};

