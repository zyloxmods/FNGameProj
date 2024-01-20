#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetSwitcher -FallbackName=WidgetSwitcher
#include "ECommonSwitcherTransition.h"
#include "ETransitionCurve.h"
#include "OnActiveWidgetChangedDelegate.h"
#include "OnActiveWidgetDeactivatedDelegate.h"
#include "WidgetSwitcher.h"
#include "CommonWidgetSwitcher.generated.h"

class UCommonActivatablePanel;
class UWidget;

UCLASS(Blueprintable)
class COMMONUI_API UCommonWidgetSwitcher : public UWidgetSwitcher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveWidgetDeactivated OnActiveWidgetDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveWidgetChanged OnActiveWidgetChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonSwitcherTransition TransitionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransitionCurve TransitionCurveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWidgetActivationEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutroPanelBelow;
    
public:
    UCommonWidgetSwitcher();
    UFUNCTION(BlueprintCallable)
    void SetDisableTransitionAnimation(bool bDisableAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWidgetIndex_Advanced(const int32 Index, const bool AttemptActivationChange);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWidget_Advanced(UWidget* Widget, const bool AttemptActivationChange);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWidgets() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleActiveWidgetDeactivated(UCommonActivatablePanel* DeactivatedPanel);
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateWidget();
    
    UFUNCTION(BlueprintCallable)
    void ActivateWidget();
    
    UFUNCTION(BlueprintCallable)
    void ActivatePreviousWidget(bool bCanWrap);
    
    UFUNCTION(BlueprintCallable)
    void ActivateNextWidget(bool bCanWrap);
    
};

