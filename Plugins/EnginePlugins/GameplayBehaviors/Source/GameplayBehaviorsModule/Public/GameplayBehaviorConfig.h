#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "GameplayBehaviorConfig.generated.h"

class UGameplayBehavior;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GAMEPLAYBEHAVIORSMODULE_API UGameplayBehaviorConfig : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayBehavior> BehaviorClass;
    
public:
    UGameplayBehaviorConfig();
};

