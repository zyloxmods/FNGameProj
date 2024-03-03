#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "AthenaActivatableChatWidget.generated.h"

class UAthenaChatModalWrapper;
class UCommonButton;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaActivatableChatWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChatModalWrapper* Activatable_ModalBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_HoldToOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InputActionDataTable;
    
public:
    UAthenaActivatableChatWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusChat(bool bFocus);
    
    UFUNCTION(BlueprintCallable)
    void BacchusFrontendFocusChat();
    
};

