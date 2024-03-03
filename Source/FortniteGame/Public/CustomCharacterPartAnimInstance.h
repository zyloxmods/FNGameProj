#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EFortCustomPartType.h"
#include "EFortDayPhase.h"
#include "FortAnimInput_SkydivingExternalForce.h"
#include "FortAnimInput_SlopeInfo.h"
#include "FortAnimInstance.h"
#include "FortPlayMontageForGameplayTagQueryInterface.h"
#include "GameplayTagAnimations.h"
#include "CustomCharacterPartAnimInstance.generated.h"

class AFortPlayerPawn;
class AFortWeapon;
class UAnimMontage;
class UFortPlayerAnimInstance;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class UCustomCharacterPartAnimInstance : public UFortAnimInstance, public IFortPlayMontageForGameplayTagQueryInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortWeapon* CurrentWeapon;
    
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
    uint8 bIsCharacterCustomizationLoaded: 1;
    
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
    uint8 bIsSprinting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsAccelerating2D: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsMoving2D: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsBackpedaling: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsUsingJetpack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSlopeSliding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSurfaceSwimming: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsWaterJump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSwimSprinting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsPlayingEmote: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsPlayingMeleeAnim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsPlayingFullBodySlotInFrontEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsInFrontEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsInVehicle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsInShoppingCart: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsInCannon: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsTargeting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCrouchSprinting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsDBNO: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsOnGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsLandingPredicted: 1;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsOstrichVehicleDriver: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsOstrichVehicleGunner: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsMeatballDriver: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsMeatballPassenger: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsDBNOCarrying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsDBNOCarried: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideRBANSimSpaceInFrontEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagAnimations GameplayTagAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CrouchingWithRigidBodyEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_SkydivingExternalForce SkydivingExternalForceInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_SlopeInfo SlopeInfoInput;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRegisteredForDayPhaseChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortCustomPartType PartType;
    
public:
    UCustomCharacterPartAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreDestruction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PickaxeItemDefinitionHasAnyMetaTag(const TArray<FGameplayTag>& Tags, bool bRequiresEquipped);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponChanged();
    
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
    void OnEndPlayingEmote();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndJumping();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndFalling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndCrouching();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterCustomizationLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginTargeting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginSkydiving();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginPlayingEmote();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginJumping();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginFalling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginCrouching();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector MakeWaveVector(FRotator Amplitudes, FRotator Frequencies, FRotator Offsets, bool bUseNoise, FVector min, FVector max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float MakeWaveScalar(float Amplitude, float Frequency, float Offset, bool bUseNoise, FVector2D MinMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator MakeWaveRotator(FRotator Amplitudes, FRotator Frequencies, FRotator Offsets, bool bUseNoise, FVector min, FVector max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetPartSkeletalMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOwnerZVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetOwnerSkeletalMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlayerAnimInstance* GetOwnerFortPlayerAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOwnerDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortCustomPartType GetCharacterPartType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetAssociatedPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* FindChildCommponentFromAttachSocket(USkeletalMeshComponent* Parent, bool bIncludeAllDescendants, FName AttachSocket) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckForTail(bool& bHasTail) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckForBackbling(bool& bIsWearingBackbling, bool& bIsBackblingLong, float LongBackblingThreshold) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CharacterItemDefinitionHasAnyMetaTag(const TArray<FGameplayTag>& Tags);
    
    
    // Fix for true pure virtual functions not being implemented
};

