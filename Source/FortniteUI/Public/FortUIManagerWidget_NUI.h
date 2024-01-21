#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortAnnouncementDisplayPreference.h"
#include "EFortErrorSeverity.h"
#include "EFortNotificationPriority.h"
#include "EFortNotificationQueueType.h"
#include "FortDialogDescription.h"
#include "FortDialogDescription_NUI.h"
#include "FortDialogExternalLatentActionHandle.h"
#include "FortUIManagerInterface.h"
#include "EFortUIState.h"
#include "FortErrorInfo.h"
#include "Templates/SubclassOf.h"
#include "FortUIManagerWidget_NUI.generated.h"

class UCommonActivatablePanel;
class UFortPlayerBanned;
class UFortUIManagerWidget_NUI;
class UFortUINavigationManager;
class UFortUINotification;
class UFortUINotificationManager;
class UFortUINotificationQueue;
class UFortUIStateTrigger;
class UFortUIStateWidget_NUI;
class UNamedSlot;
class UObject;
class UTexture2D;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortUIManagerWidget_NUI : public UCommonUserWidget, public IFortUIManagerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnShouldOpenTalkingHead, UTexture2D*, Image, FText, Title, FText, Subtitle, EFortAnnouncementDisplayPreference, DisplayPreference);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShouldCloseTalkingHead);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShouldBlockSubtitlePortraitChanged, bool, bShouldBlockSubtitlePortrait);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPreShowConfirmation_NUI, UFortUIManagerWidget_NUI*, Source, const FFortDialogDescription_NUI&, DialogDescription);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndSpokenDialog);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBeginSpokenDialog);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreShowConfirmation_NUI OnPreShowConfirmation_NUI;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeginSpokenDialog OnBeginSpokenDialog;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndSpokenDialog OnEndSpokenDialog;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShouldOpenTalkingHead OnShouldOpenTalkingHead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShouldCloseTalkingHead OnShouldCloseTalkingHead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShouldBlockSubtitlePortraitChanged OnShouldBlockSubtitlePortraitChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatablePanel* CurrentModalWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortUIState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortUIState PendingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortUIStateWidget_NUI* CurrentStateWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortUIStateTrigger*> StateTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsStateContentDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortUINavigationManager* NavigationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortUINotificationManager* NotificationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UUserWidget*> TypedWidgetCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSupressErrors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayerBanned> PlayerBannedScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BlockSubtitlePortraitRefcount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCommonActivatablePanel*> ModalPanelQueue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* ModalLayer;
    
public:
    UFortUIManagerWidget_NUI();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStateWidgetContent(UFortUIStateWidget_NUI* StateWidget);
    
public:
    UFUNCTION(BlueprintCallable)
    void UnregisterStateTrigger(UFortUIStateTrigger* TriggerToRemove);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowErrorDialog(UObject* WorldContextObject, FText OperationDesc, FText DisplayMessage, const FString& ErrorNote, EFortErrorSeverity ErrorSeverity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBlockSubtitlePortrait() const;
    
    UFUNCTION(BlueprintCallable)
    void SetStateContentDisplayed(bool bDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetFrontEndVisibility(bool bHideHeader, bool bHideFooter, bool bHideChatWidget) const;
    
    UFUNCTION(BlueprintCallable)
    void RemoveModalPanel(UCommonActivatablePanel* ModalPanel);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseNotification(UFortUINotification* Notification);
    
    UFUNCTION(BlueprintCallable)
    void RegisterStateTrigger(UFortUIStateTrigger* StateTrigger);
    
    UFUNCTION(BlueprintCallable)
    void QueueNotification(EFortNotificationQueueType QueueType, UFortUINotification* Notification);
    
    UFUNCTION(BlueprintCallable)
    void QueueActivatablePanelIntoModalLayer(UCommonActivatablePanel* Panel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PushContentWidgetAdvanced(UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PushContentWidget(UWidget* Widget) const;
    
    UFUNCTION(BlueprintCallable)
    void PopCurrentModal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PopContentWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void PopAllContentWidgets();
    
    UFUNCTION(BlueprintCallable)
    void PopActivatablePanelInModalLayer(UCommonActivatablePanel* Panel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowConfirmation_NUI(const FFortDialogDescription_NUI& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowConfirmation(const FFortDialogDescription& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModalQueueEmptied();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndLatentWaitForConfirmationDialog(UPARAM(Ref) FFortDialogExternalLatentActionHandle& WaitingDialogHandle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyPreShowConfirmation_NUI(const FFortDialogDescription_NUI& DialogDescription);
    
    UFUNCTION(BlueprintCallable)
    void NativeClearLayers();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void KillConfirmationDialog(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStateContentDisplayed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsStateContentChildShowing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsShowingModalsConfirmationsErrors();
    
    UFUNCTION(BlueprintCallable)
    void IncrementShouldBlockSubtitlePortrait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveModalWidget() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDeactivatedModal(UCommonActivatablePanel* DeactivatedPanel);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortUINotificationQueue* GetUINotificationQueue(UObject* WorldContextObject, EFortNotificationQueueType QueueType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortUINavigationManager* GetUINavigationManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortUIManagerWidget_NUI* GetUIManagerWidget(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortUINavigationManager* GetNavigationManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortUIStateWidget_NUI* GetCurrentUIStateWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonActivatablePanel* GetCurrentModal() const;
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetCachedWidget(UClass* InClass);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayStateContent(bool bDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayErrorDialog(const FFortErrorInfo& Info);
    
public:
    UFUNCTION(BlueprintCallable)
    void DecrementShouldBlockSubtitlePortrait();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortUIStateTrigger* CreateUIStateTrigger(TSubclassOf<UFortUIStateTrigger> Class, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    UFortUINotification* CreateNotification(TSubclassOf<UFortUINotification> UINotificationClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseErrorWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseConfirmationWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanNotificationBeQueued(EFortNotificationQueueType QueueType, EFortNotificationPriority NotificationPriority) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortUIState _BPGetCurrentUIState() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

