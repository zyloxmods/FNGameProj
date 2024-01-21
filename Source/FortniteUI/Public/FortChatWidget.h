#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Components/NativeWidgetHost.h"
#include "OnChatEnteredDelegateDelegate.h"
#include "OnUserListChangedDelegateDelegate.h"
#include "FortChatWidget.generated.h"

UCLASS(Blueprintable)
class UFortChatWidget : public UNativeWidgetHost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MinimizeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoReleaseFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowEmotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ListFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimizedChatMessageNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ThrottleChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrottleTicketTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThrottleTicketCount;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChatEnteredDelegate OnChatEnteredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserListChangedDelegate OnUserListChanged;
    
    UFortChatWidget();
    UFUNCTION(BlueprintCallable)
    void SetControllerActionBrush(FSlateBrush SlateBrush);
    
    UFUNCTION(BlueprintCallable)
    void MinimizeChatWidget();
    
    UFUNCTION(BlueprintCallable)
    void FocusChatEntry();
    
};

