#pragma once
#include "CoreMinimal.h"
#include "CommonAnimatedSwitcher.h"
#include "OnActiveWidgetChangedDelegate.h"
#include "OnActiveWidgetDeactivatedDelegate.h"
#include "CommonWidgetSwitcher.generated.h"

class UCommonActivatablePanel;
class UWidget;

UCLASS(Blueprintable)
class COMMONUI_API UCommonWidgetSwitcher : public UCommonAnimatedSwitcher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveWidgetDeactivated OnActiveWidgetDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveWidgetChanged OnActiveWidgetChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWidgetActivationEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutroPanelBelow;
    
public:
    UCommonWidgetSwitcher();
    UFUNCTION(BlueprintCallable)
    void SetActiveWidgetIndex_Advanced(const int32 Index, const bool AttemptActivationChange);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWidget_Advanced(UWidget* Widget, const bool AttemptActivationChange);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleActiveWidgetDeactivated(UCommonActivatablePanel* DeactivatedPanel);
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateWidget();
    
    UFUNCTION(BlueprintCallable)
    void ActivateWidget();
    
};

