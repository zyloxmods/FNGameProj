#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortCustomGender.h"
#include "GameplayTagAnimationData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FGameplayTagAnimationData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCustomGender ValidGenders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> AnimMontage;
    
public:
    FORTNITEGAME_API FGameplayTagAnimationData();
};

