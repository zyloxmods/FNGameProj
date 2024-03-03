#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortToastWidget.generated.h"

class UFortUINotification;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortToastWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnToastFinished);
    
    UFortToastWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetToast(UFortUINotification* ToastNotification);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOpenAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayCloseAnimation();
    
    UFUNCTION(BlueprintCallable)
    void NotifyCloseAnimationFinished();
    
};

