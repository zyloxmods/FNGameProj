#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortItemManagementMulchPanel.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UFortItemManagementMulchPanel : public UInterface {
    GENERATED_BODY()
};

class IFortItemManagementMulchPanel : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void ShowMulchConfirmationModal() PURE_VIRTUAL(ShowMulchConfirmationModal,);
    
protected:
    UFUNCTION(BlueprintCallable)
    virtual void NotifyPanelDeactivated() PURE_VIRTUAL(NotifyPanelDeactivated,);
    
    UFUNCTION(BlueprintCallable)
    virtual void NotifyPanelActivated() PURE_VIRTUAL(NotifyPanelActivated,);
    
public:
    UFUNCTION(BlueprintCallable)
    virtual void HideMulchConfirmationModal() PURE_VIRTUAL(HideMulchConfirmationModal,);
    
};

