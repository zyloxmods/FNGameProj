#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortDialogDescription_NUI.h"
#include "Templates/SubclassOf.h"
#include "FortRootViewportLayout.generated.h"

class UCommonActivatableWidgetQueue;
class UFortConfirmationWindow;
class UFortErrorWindow;
class UFortLetoLayoutBorder;
class UFortProgressModal;
class UFortRestartClientModal;
class UFortToastDisplayArea;
class UFortUINotificationManager;
class UFortUIStateWidgetBase;
class UFortUIStateWidget_NUI;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortRootViewportLayout : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortUIStateWidgetBase* CurrentStateWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortUINotificationManager* NotificationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortDialogDescription_NUI> ConfirmationQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortUIStateWidget_NUI* CurrentLegacyStateWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortLetoLayoutBorder> LetoLayoutBorderClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetQueue* WidgetQueue_ModalContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortConfirmationWindow* ConfirmationWindow_ConfirmationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortErrorWindow* ErrorWindow_Errors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortProgressModal* ProgressModal_ControllerDisconnected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortRestartClientModal* RestartModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortToastDisplayArea* ToastDisplayArea_ToastHandler;
    
public:
    UFortRootViewportLayout();
private:
    UFUNCTION(BlueprintCallable)
    void HandleControllerConnectionChanged(bool bConnected);
    
};

