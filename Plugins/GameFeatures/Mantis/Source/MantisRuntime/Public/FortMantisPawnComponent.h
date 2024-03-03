#pragma once
#include "CoreMinimal.h"
#include "PawnComponent.h"
#include "FortMantisMontageData.h"
#include "FortMantisPawnComponent.generated.h"

class AFortWeapon;
class UAnimMontage;
class UCharacterMovementComponent;
class UFortMantisData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortMantisPawnComponent : public UPawnComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimMontage*, FFortMantisMontageData> MontageDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMantisData* MantisData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortWeapon* Weapon;
    
public:
    UFortMantisPawnComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPostPhysicsRotation(UCharacterMovementComponent* CharMoveComp, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterMovementPreUpdate(UCharacterMovementComponent* CharMoveComp, float DeltaSeconds);
    
};

