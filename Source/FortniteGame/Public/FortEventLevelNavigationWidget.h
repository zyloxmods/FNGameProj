#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "CommonUserWidget.h"
#include "FortEventLevelNavigationWidget.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortEventLevelNavigationWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Navigation;
    
public:
    UFortEventLevelNavigationWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBangState(bool bShowBang);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectHoverEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectHoverBegin();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleInputMethodChanged(ECommonInputType CurrentInputType);
    
};

