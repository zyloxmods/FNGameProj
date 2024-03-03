#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DamagerInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDamagerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SourceTags;
    
    FORTNITEGAME_API FDamagerInfo();
};

