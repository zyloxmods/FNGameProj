#pragma once
#include "CoreMinimal.h"
#include "FortBaseAnimInstance.h"
#include "FortWeaponAnimInstance.generated.h"

class UAnimNotify;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UFortWeaponAnimInstance : public UFortBaseAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWantsReducedWork;
    
    UFortWeaponAnimInstance();
    UFUNCTION(BlueprintCallable)
    void AnimNotify_FullyBlendedReducedWork(const UAnimNotify* Notify);
    
};

