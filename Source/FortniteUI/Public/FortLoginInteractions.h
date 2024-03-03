#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortClientEventInterface.h"
#include "FortLoginInteractions.generated.h"

class UCommonButton;
class UCommonWidgetSwitcher;
class UFortAccountLinkingWindow;
class UFortAccountNotFound;
class UFortAccountPinLinkingWindow;
class UFortAgeGateFlow;
class UFortDisplayNameWidget;
class UFortEulaWidget;
class UFortLoginCredentialSelect;
class UFortMultiFactorAuthWidget;
class UFortPlayedBeforeSelect;
class UFortRedirectToEpicAccountWidget;
class UFortSignInWidget;
class UFortWebLoginWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLoginInteractions : public UCommonActivatablePanel, public IFortClientEventInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayedBeforeSelect* PlayedBefore_Select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLoginCredentialSelect* Credential_Select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSignInWidget* SignIn_Credentials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortRedirectToEpicAccountWidget* Redirect_EpicAccount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAccountNotFound* Account_NotFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDisplayNameWidget* DisplayName_Create;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMultiFactorAuthWidget* MFA_Auth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEulaWidget* EULA_Accept;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAccountLinkingWindow* Account_Link;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAccountPinLinkingWindow* Account_PinLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWebLoginWidget* Web_Login;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAgeGateFlow* AgeGateFlow;
    
public:
    UFortLoginInteractions();
private:
    UFUNCTION(BlueprintCallable)
    void HandleDisplayWebLogin(UWidget* WebWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleDisplayWebAccountCreation(UWidget* WebWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleDismissWebLogin();
    
    UFUNCTION(BlueprintCallable)
    void HandleDismissWebAccountCreation();
    
    
    // Fix for true pure virtual functions not being implemented
};

