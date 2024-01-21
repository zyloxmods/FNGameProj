#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortCustomPartType.h"
#include "EFortDayPhase.h"
#include "FortAnimInput_SkydivingExternalForce.h"
#include "FortAnimInstance.h"
#include "FortPlayMontageForGameplayTagQueryInterface.h"
#include "GameplayTagAnimations.h"
#include "CustomCharacterPartAnimInstance.generated.h"

class AFortPlayerPawn;
class UAnimMontage;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class UCustomCharacterPartAnimInstance : public UFortAnimInstance, public IFortPlayMontageForGameplayTagQueryInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesDayPhaseChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreSignificanceManagerAndAlwaysTick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideUntilFirstAnimationUpdate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUnhideOnNextUpdate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanPlayCustomAnimations: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUpdateOwnerAnimInputProperty: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSkydiving: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsParachuteOpened: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSkydiveDiveMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSkydiveFloating: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCrouching: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsTargeting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsInVehicleSeat: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsFerretVehicleDriver: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsFerretVehiclePassenger: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsGolfCartVehicleDriver: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsGolfCartVehicleFrontPassenger: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsGolfCartVehicleBackPassenger: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsAntelopeVehicleDriver: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsAntelopeVehiclePassenger: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsJackalVehicleDriver: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsOctopusVehicleDriver: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagAnimations GameplayTagAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CrouchingWithRigidBodyEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_SkydivingExternalForce SkydivingExternalForceInput;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRegisteredForDayPhaseChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortCustomPartType PartType;
    
public:
    UCustomCharacterPartAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreDestruction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayMontageFromGameplayTagQuery(const FGameplayTagQuery& MatchingQuery, UAnimMontage* MontagePlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnParachuteOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnParachuteClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyPartsStopped(FName Context);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyPartsStarted(FName Context);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndTargeting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndSkydiving();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndCrouching();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginTargeting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginSkydiving();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginCrouching();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetPartSkeletalMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOwnerZVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetOwnerSkeletalMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOwnerDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortCustomPartType GetCharacterPartType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetAssociatedPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* FindChildCommponentFromAttachSocket(USkeletalMeshComponent* Parent, bool bIncludeAllDescendants, FName AttachSocket) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

