#pragma once
#include "CoreMinimal.h"
#include "ActionBindingIconPicker.h"
#include "FortMobileButtonBehaviorComponent_IconPicker.h"
#include "FortMobileButtonBehaviorComponent_ActionBindingIconPicker.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileButtonBehaviorComponent_ActionBindingIconPicker : public UFortMobileButtonBehaviorComponent_IconPicker {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionBindingIconPicker> ActionBindingSpriteOverrides;
    
public:
    UFortMobileButtonBehaviorComponent_ActionBindingIconPicker();
};

