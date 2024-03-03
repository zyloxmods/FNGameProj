#pragma once
#include "CoreMinimal.h"
#include "FortMobileButtonBehaviorComponent_TagIconPicker.h"
#include "FortMobileButtonBehaviorComponent_AbilityIconPicker.generated.h"

class UAbilitySystemComponent;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileButtonBehaviorComponent_AbilityIconPicker : public UFortMobileButtonBehaviorComponent_TagIconPicker {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystemComponent;
    
public:
    UFortMobileButtonBehaviorComponent_AbilityIconPicker();
};

