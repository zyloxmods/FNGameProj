#pragma once
#include "CoreMinimal.h"
#include "GameplayBehaviorConfig.h"
#include "GameplayBehaviorConfig_Animation.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GAMEPLAYBEHAVIORSMODULE_API UGameplayBehaviorConfig_Animation : public UGameplayBehaviorConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLoop: 1;
    
public:
    UGameplayBehaviorConfig_Animation();
};

