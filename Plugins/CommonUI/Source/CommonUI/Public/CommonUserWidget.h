#pragma once
#include "CoreMinimal.h"
#include "UserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "CommonUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class COMMONUI_API UCommonUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumePointerInput;
    
public:
    UCommonUserWidget();
    UFUNCTION(BlueprintCallable)
    void SetConsumePointerInput(bool bInConsumePointerInput);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnTouchLeave(const FPointerEvent& TouchEvent);
    
};

