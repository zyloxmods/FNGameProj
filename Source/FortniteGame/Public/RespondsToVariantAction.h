#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "RespondsToVariantAction.generated.h"

UINTERFACE(Blueprintable)
class URespondsToVariantAction : public UInterface {
    GENERATED_BODY()
};

class IRespondsToVariantAction : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RespondToTaggedAction(const FGameplayTag& ActionTag, bool bIsApplyingAction);
    
};

