#pragma once
#include "CoreMinimal.h"
#include "ActionBindingVisibility.h"
#include "FortMobileButtonBehaviorComponent_Visibility.h"
#include "FortMobileButtonBehaviorComponent_ActionBindingVisibility.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileButtonBehaviorComponent_ActionBindingVisibility : public UFortMobileButtonBehaviorComponent_Visibility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionBindingVisibility> ActionBindingVisibilites;
    
public:
    UFortMobileButtonBehaviorComponent_ActionBindingVisibility();
};

