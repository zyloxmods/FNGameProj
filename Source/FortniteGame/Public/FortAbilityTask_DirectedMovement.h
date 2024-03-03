#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "DirectedMovementDelegateDelegate.h"
#include "EFortDirectedMovementSpace.h"
#include "FortAbilityTask_DirectedMovement.generated.h"

class AActor;
class UCharacterMovementComponent;
class UFortAbilityTask_DirectedMovement;
class UGameplayAbility;
class USceneComponent;

UCLASS(Blueprintable)
class UFortAbilityTask_DirectedMovement : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectedMovementDelegate OnMovementComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectedMovementDelegate OnMovementCancelled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    USceneComponent* TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MovementDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float IdealArrivalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DurationOfMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bModifyZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCancelOnFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* MovementComponent;
    
public:
    UFortAbilityTask_DirectedMovement();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_DirectedMovement* DirectedMovementToLocation(UGameplayAbility* OwningAbility, FVector MovementTargetLocation, TEnumAsByte<EFortDirectedMovementSpace::Type> MovementSpaceType, float MovementDuration, float CloseEnoughDistance, bool ModifyZ, bool NewBCancelOnFalling);
    
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_DirectedMovement* DirectedMovementToComponent(UGameplayAbility* OwningAbility, USceneComponent* NewTargetComponent, float MaxMovementDistance, float MovementDuration, float IdealDistance, bool ModifyZ, bool NewBCancelOnFalling);
    
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_DirectedMovement* DirectedMovementToActor(UGameplayAbility* OwningAbility, AActor* TargetActor, float MaxMovementDistance, float MovementDuration, float IdealDistance, bool ModifyZ, bool NewBCancelOnFalling);
    
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_DirectedMovement* DirectedMovement(UGameplayAbility* OwningAbility, FVector MovementDirection, TEnumAsByte<EFortDirectedMovementSpace::Type> MovementSpaceType, float NewMovementDistance, float MovementDuration, float IdealDistance, bool ModifyZ, bool NewBCancelOnFalling);
    
};

