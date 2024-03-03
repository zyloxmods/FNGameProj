#pragma once
#include "CoreMinimal.h"
#include "GameplayBehaviorConfig.h"
#include "GameplayBehaviorConfig_BehaviorTree.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GAMEPLAYBEHAVIORSMODULE_API UGameplayBehaviorConfig_BehaviorTree : public UGameplayBehaviorConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBehaviorTree> BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRevertToPreviousBTOnFinish: 1;
    
public:
    UGameplayBehaviorConfig_BehaviorTree();
};

