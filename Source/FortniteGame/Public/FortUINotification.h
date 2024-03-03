#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EFortNotificationPriority.h"
#include "EFortNotificationType.h"
#include "FortUINotificationClearedDelegateDelegate.h"
#include "FortUINotification.generated.h"

class APlayerController;
class UUserWidget;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortUINotification : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortNotificationType NotificationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl IdToRepresent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUINotificationClearedDelegate OnNotificationCleared;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> DisplayAsset;
    
public:
    UFortUINotification();
    UFUNCTION(BlueprintCallable)
    void TakeAction();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool ShouldShowNotification() const;
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(EFortNotificationPriority InPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void NotificationShown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortNotificationPriority GetPriority() const;
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UObject> GetImageOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    UUserWidget* CreateWidget(APlayerController* OwningPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void ClearNotification();
    
};

