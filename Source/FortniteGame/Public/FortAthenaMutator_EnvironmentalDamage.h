#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_EnvironmentalDamage.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_EnvironmentalDamage : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery DamageTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExcludeActorsAddedToVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WorldActivationTime;
    
public:
    AFortAthenaMutator_EnvironmentalDamage();
};

