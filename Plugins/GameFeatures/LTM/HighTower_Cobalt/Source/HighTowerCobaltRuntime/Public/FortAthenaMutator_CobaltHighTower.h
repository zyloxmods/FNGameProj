#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_Cobalt.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_CobaltHighTower.generated.h"

class AFortAthenaMutator_InventoryOverride_Bucket;
class UGameplayEffect;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_CobaltHighTower : public AFortAthenaMutator_Cobalt {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShowAbilityIntroTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bPreventDamageToBuildingsDuringWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bAllowBuildingDuringWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> BlockBuildAbilityGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag JumpAbilityActionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_InventoryOverride_Bucket* InventoryOverrideBucketMutator;
    
public:
    AFortAthenaMutator_CobaltHighTower();
};

