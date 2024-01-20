#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MontageLookupData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FMontageLookupData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> AnimMontage;
    
public:
    FORTNITEGAME_API FMontageLookupData();
};

