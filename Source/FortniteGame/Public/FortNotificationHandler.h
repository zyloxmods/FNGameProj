#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortNotificationClearedDelegateDelegate.h"
#include "FortNotificationHandler.generated.h"

class APlayerController;
class UUserWidget;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortNotificationHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortNotificationClearedDelegate OnNotificationCleared;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotificationCleared;
    
public:
    UFortNotificationHandler();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void NotificationShown();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    UUserWidget* CreateWidget(APlayerController* OwningPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void ClearNotification();
    
};

