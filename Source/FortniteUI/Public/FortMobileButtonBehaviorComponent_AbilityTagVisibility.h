#pragma once
#include "CoreMinimal.h"
#include "FortMobileButtonBehaviorComponent_TagVisibility.h"
#include "FortMobileButtonBehaviorComponent_AbilityTagVisibility.generated.h"

class UAbilitySystemComponent;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileButtonBehaviorComponent_AbilityTagVisibility : public UFortMobileButtonBehaviorComponent_TagVisibility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystemComponent;
    
public:
    UFortMobileButtonBehaviorComponent_AbilityTagVisibility();
};

