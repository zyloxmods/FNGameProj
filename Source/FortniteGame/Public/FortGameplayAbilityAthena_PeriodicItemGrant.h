#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "ActiveItemGrantInfo.h"
#include "FortGameplayAbility.h"
#include "FortGameplayAbilityAthena_PeriodicItemGrant.generated.h"

class AFortPlayerController;

UCLASS(Blueprintable)
class UFortGameplayAbilityAthena_PeriodicItemGrant : public UFortGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FActiveItemGrantInfo, FScalableFloat> ItemsToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimerHandle> ActiveTimers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* OwnerControllerCachedValue;
    
public:
    UFortGameplayAbilityAthena_PeriodicItemGrant();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopItemAwardTimers();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartItemAwardTimers();
    
};

