#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortNotificationType.h"
#include "FortToastDisplayArea.generated.h"

class UFortFriendSubscriptionToastWidget;
class UFortToastWidget;
class UFortUINotification;
class UFortUINotificationQueue;
class UFortVoiceChannelChangePopup;

UCLASS(Blueprintable, EditInlineNew)
class UFortToastDisplayArea : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortUINotificationQueue* ToastQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortUINotification* CurrentToast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortToastWidget* ToastWidget_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortToastWidget* PowerToastWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortToastWidget* ToastWidget_MinorError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVoiceChannelChangePopup* VoiceChannelChangePopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortFriendSubscriptionToastWidget* SubscribeToastWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortToastWidget* ToastWidgetDonut;
    
public:
    UFortToastDisplayArea();
    UFUNCTION(BlueprintCallable)
    void TestBasicToast(EFortNotificationType InNotificationType, FText InTitle, FText InDescription);
    
    UFUNCTION(BlueprintCallable)
    void RegisterToastHandler();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleToastFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleNewToastAvailable();
    
};

