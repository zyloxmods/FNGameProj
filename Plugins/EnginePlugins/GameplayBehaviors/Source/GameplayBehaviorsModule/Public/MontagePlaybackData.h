#pragma once
#include "CoreMinimal.h"
#include "MontagePlaybackData.generated.h"

class AActor;
class UAbilitySystemComponent;
class UAnimMontage;

USTRUCT(BlueprintType)
struct FMontagePlaybackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Avatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilityComponent;
    
    GAMEPLAYBEHAVIORSMODULE_API FMontagePlaybackData();
};

