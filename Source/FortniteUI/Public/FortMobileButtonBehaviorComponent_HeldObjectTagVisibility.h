#pragma once
#include "CoreMinimal.h"
#include "FortMobileButtonBehaviorComponent_TagVisibility.h"
#include "FortMobileButtonBehaviorComponent_HeldObjectTagVisibility.generated.h"

class UAbilitySystemComponent;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileButtonBehaviorComponent_HeldObjectTagVisibility : public UFortMobileButtonBehaviorComponent_TagVisibility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilityComponent;
    
public:
    UFortMobileButtonBehaviorComponent_HeldObjectTagVisibility();
};

