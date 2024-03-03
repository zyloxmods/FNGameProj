#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortAccountLinkingWindow.generated.h"

class UBackgroundBlur;
class UCircularThrobber;
class UCommonButton;
class UCommonWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAccountLinkingWindow : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFortNewPlatformReceipt);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBackgroundBlur* HaveEpicAccountBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBackgroundBlur* SkipSignInBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_NoThanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCircularThrobber* Throbber_LoginDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Signup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Login;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_NoThanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SkipSignInSignup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SkipSignInLogin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SkipSignInNoThanks;
    
public:
    UFortAccountLinkingWindow();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSkipSignUpClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleSkipNoThanksClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleSkipLoginClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleSignupClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleNoThanksClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleLoginClicked();
    
};

