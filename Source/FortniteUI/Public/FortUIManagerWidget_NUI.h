#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortNotificationQueueType.h"
#include "FortDialogDescription_NUI.h"
#include "FortUIManagerInterface.h"
#include "EFortUIState.h"
#include "Templates/SubclassOf.h"
#include "FortUIManagerWidget_NUI.generated.h"

class UCommonActivatablePanel;
class UFortConfirmationWindow;
class UFortErrorWindow;
class UFortPlayerBanned;
class UFortRestartClientModal;
class UFortUIManagerWidget_NUI;
class UFortUINotification;
class UFortUINotificationManager;
class UFortUINotificationQueue;
class UFortUIStateWidget_NUI;
class UNamedSlot;
class UObject;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortUIManagerWidget_NUI : public UCommonUserWidget, public IFortUIManagerInterface {
    GENERATED_BODY()
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("FortUIManager", GetFName());
    }
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonActivatablePanel* CurrentModalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCommonActivatablePanel*> ModalPanelQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayerBanned> PlayerBannedScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortUIStateWidget_NUI* CurrentStateWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortUINotificationManager* NotificationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UUserWidget*> TypedWidgetCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortDialogDescription_NUI> ConfirmationQueue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* StateContentLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* ModalLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortErrorWindow* ErrorWindow_Errors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortRestartClientModal* RestartModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortConfirmationWindow* ConfirmationWindow_ConfirmationWidget;
    
public:
    UFortUIManagerWidget_NUI();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStateWidgetContent(UFortUIStateWidget_NUI* StateWidget);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestClearConfirmationLayer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModalQueueEmptied();
    
    UFUNCTION(BlueprintCallable)
    void NativeClearLayers();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void KillConfirmationDialog(UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStateContentChildShowing() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsShowingModalsConfirmationsErrors();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleErrorWindowDeactivated(UCommonActivatablePanel* RemovedPanel);
    
    UFUNCTION(BlueprintCallable)
    void HandleDeactivatedModal(UCommonActivatablePanel* DeactivatedPanel);
    
    UFUNCTION(BlueprintCallable)
    void HandleConfirmationWindowDeactivated(UCommonActivatablePanel* DeactivatedPanel);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortUINotificationQueue* GetUINotificationQueue(UObject* WorldContextObject, EFortNotificationQueueType QueueType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortUIManagerWidget_NUI* GetUIManagerWidget(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    UFortUINotification* CreateNotification(TSubclassOf<UFortUINotification> UINotificationClass);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortUIState _BPGetCurrentUIState() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

