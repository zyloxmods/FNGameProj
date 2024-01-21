#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "OnMessageItemDisplayStateChangeDelegate.h"
#include "FortUIMessageItemWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortUIMessageItemWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMessageItemDisplayStateChange OnMessageDisplayed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMessageItemDisplayStateChange OnMessageRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName MessageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StackSize;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemoveDuration;
    
public:
    UFortUIMessageItemWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStackSizeChanged(int32 OldStackSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnedToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginRemove();
    
};

