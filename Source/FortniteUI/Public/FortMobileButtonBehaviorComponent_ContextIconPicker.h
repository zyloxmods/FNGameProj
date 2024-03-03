#pragma once
#include "CoreMinimal.h"
#include "FortMobileButtonBehaviorComponent_TagIconPicker.h"
#include "FortMobileButtonBehaviorComponent_ContextIconPicker.generated.h"

class UFortControllerComponent_InputContextTracker;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileButtonBehaviorComponent_ContextIconPicker : public UFortMobileButtonBehaviorComponent_TagIconPicker {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_InputContextTracker* ContextTracker;
    
public:
    UFortMobileButtonBehaviorComponent_ContextIconPicker();
};

