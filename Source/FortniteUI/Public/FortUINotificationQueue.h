#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFortNotificationPriority.h"
#include "OnFortNotificationAvailableDelegate.h"
#include "FortUINotificationQueue.generated.h"

class UFortUINotification;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortUINotificationQueue : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNotificationsInQueue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortUINotification*> NotificationQueue;
    
public:
    UFortUINotificationQueue();
    UFUNCTION(BlueprintCallable)
    void UnregisterToReceiveNotifications();
    
    UFUNCTION(BlueprintCallable)
    void RemoveNotification(const UFortUINotification* InNotificationDescription);
    
    UFUNCTION(BlueprintCallable)
    void RegisterToReceiveNotifications(const FOnFortNotificationAvailable& NotificationDelegate);
    
    UFUNCTION(BlueprintCallable)
    void QueueNotification(UFortUINotification* Notification, bool bShowImmediately);
    
    UFUNCTION(BlueprintCallable)
    UFortUINotification* GetNextNotification();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanNotificationBeQueued(EFortNotificationPriority Priority) const;
    
};

