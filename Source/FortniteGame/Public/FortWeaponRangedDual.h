#pragma once
#include "CoreMinimal.h"
#include "EDualWeaponHand.h"
#include "FortWeaponRanged.h"
#include "OnHandFiredDelegate.h"
#include "FortWeaponRangedDual.generated.h"

class UAnimMontage;
class USkeletalMeshComponentBudgeted;

UCLASS(Blueprintable)
class AFortWeaponRangedDual : public AFortWeaponRanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* LeftHandWeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LeftHandFireAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LeftCockingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LeftHandFireDownsightsAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LeftWeaponFireMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LeftWeaponFireDownsightsMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LeftWeaponCockingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LeftWeaponReloadMontage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandFired OnHandFired;
    
    AFortWeaponRangedDual();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    EDualWeaponHand GetNextFireHand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponentBudgeted* GetLeftHandWeaponMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    EDualWeaponHand GetLastFireHand() const;
    
};

