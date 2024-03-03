#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "AttributeSet.h"
#include "EConsumePickupsDropOnDeathFilterRule.h"
#include "EConsumePickupsDropOnDeathFilterRule_Definitive.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_ConsumePickups.generated.h"

class UFortControllerComponent_ConsumePickups;
class UGameplayEffect;
class UObject;

UCLASS(Blueprintable)
class ARSENICCORERUNTIME_API AFortAthenaMutator_ConsumePickups : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bCanConsumeWhenHealthIsFull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ConsumePickupInteractionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxConsumedItemsToDropOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EConsumePickupsDropOnDeathFilterRule> DropOnDeathFilterRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConsumePickupsDropOnDeathFilterRule_Definitive DefinitiveDropOnDeathFilterRule;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffectClassesToApplyByRarity[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortControllerComponent_ConsumePickups> ConsumePickupsControllerComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFindAndSetManagerMutatorAutomatically;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ManagerObject, meta=(AllowPrivateAccess=true))
    UObject* ManagerObject;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ManagerObject();
    
    UFUNCTION(BlueprintCallable)
    void OnAllGameplayModifiersRegistered();
    
};

