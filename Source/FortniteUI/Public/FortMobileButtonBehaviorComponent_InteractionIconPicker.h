#pragma once
#include "CoreMinimal.h"
#include "FortMobileButtonBehaviorComponent_TagIconPicker.h"
#include "FortMobileButtonBehaviorComponent_InteractionIconPicker.generated.h"

class UFortControllerComponent_Interaction;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileButtonBehaviorComponent_InteractionIconPicker : public UFortMobileButtonBehaviorComponent_TagIconPicker {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_Interaction* InteractionComponent;
    
public:
    UFortMobileButtonBehaviorComponent_InteractionIconPicker();
};

