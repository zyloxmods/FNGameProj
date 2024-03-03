#pragma once
#include "CoreMinimal.h"
#include "ECenterPopupMessageStateEnum.h"
#include "FortHUDElementWidget.h"
#include "FortHUDCenterPopupMessageWidget.generated.h"

class UCommonActivatablePanel;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortHUDCenterPopupMessageWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> CenterPopupModalWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatablePanel* CenterPopupModalWidget;
    
public:
    UFortHUDCenterPopupMessageWidget();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void UpdateState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnModalDisplayed(ECenterPopupMessageStateEnum NewState, UCommonActivatablePanel* ModalPopup);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    ECenterPopupMessageStateEnum GetCenterPopupMessageState() const;
    
};

