#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortPrioritizedWidget.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class FORTNITEUI_API UFortPrioritizedWidget : public UInterface {
    GENERATED_BODY()
};

class FORTNITEUI_API IFortPrioritizedWidget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void WidgetIsFinished() PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetHasActiveContent(bool bNewActive) PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RequestActivation() PURE_VIRTUAL(RequestActivation,);
    
};

