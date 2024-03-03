#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FinishedNotificationDelegate.h"
#include "FortNotificationEntry.generated.h"

class UFortNotificationEntry;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortNotificationEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishedNotification FinishedDisplayingNotification;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRushDisplay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RushWidgetThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortNotificationEntry* LinkedNotification;
    
public:
    UFortNotificationEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartNotificationOutro();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartNotificationIntro();
    
public:
    UFUNCTION(BlueprintCallable)
    void NativeStartNotificationOutro();
    
    UFUNCTION(BlueprintCallable)
    void FinishNotificationOutro();
    
    UFUNCTION(BlueprintCallable)
    void FinishNotificationIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddNotificationBackIntoPool();
    
};

