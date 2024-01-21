#pragma once
#include "CoreMinimal.h"
#include "FortDialogDescription.h"
#include "FortNotificationHandler.h"
#include "FortDialogNotificationHandler.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortDialogNotificationHandler : public UFortNotificationHandler {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnActionComplete);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActionComplete OnAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActionComplete OnDeclined;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActionComplete OnTimedOut;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDialogDescription DialogDescription;
    
public:
    UFortDialogNotificationHandler();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void Timeout();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetDialogDescription(FFortDialogDescription InDialogDescription);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void Decline();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void Accept();
    
};

