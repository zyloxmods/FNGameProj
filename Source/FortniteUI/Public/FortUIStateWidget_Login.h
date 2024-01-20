#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortUIStateWidget_NUI.h"
#include "Templates/SubclassOf.h"
#include "FortUIStateWidget_Login.generated.h"

class UCommonWidgetStack;
class UFortAccountLinkingWindow;
class UFortAccountNotFound;
class UFortAccountPinLinkingWindow;
class UFortDisplayNameWidget;
class UFortEulaWidget;
class UFortHaveInviteSelect;
class UFortHealthWarningBase;
class UFortInviteRequest;
class UFortLoginCredentialSelect;
class UFortLoginResultWidget;
class UFortLoginStatus;
class UFortLoginUnavailable;
class UFortMOTDWidget;
class UFortMultiFactorAuthWidget;
class UFortNewAccountWarning;
class UFortPlayedBeforeSelect;
class UFortRedirectToEpicAccountWidget;
class UFortSignInWidget;
class UFortSplashScreenWidget;
class UFortWebLoginWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortUIStateWidget_Login : public UFortUIStateWidget_NUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortLoginStatus> StatusScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortLoginStatus* StatusScreenWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSplashScreenWidget> SplashScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortSplashScreenWidget* SplashScreenWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortHaveInviteSelect> HaveInviteClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortHaveInviteSelect* HaveInviteWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayedBeforeSelect> PlayedBeforeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayedBeforeSelect* PlayedBeforeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortLoginCredentialSelect> CredentialSelectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortLoginCredentialSelect* CredentialSelectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortInviteRequest> InviteRequestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortInviteRequest* InviteRequestWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSignInWidget> SignInScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortSignInWidget* SignInScreenWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSignInWidget> SignInConsoleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortSignInWidget* SignInConsoleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortRedirectToEpicAccountWidget> RedirectToEpicClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortRedirectToEpicAccountWidget* RedirectToEpicWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortNewAccountWarning> NewAccountWarningClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortNewAccountWarning* NewAccountWarningWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortLoginResultWidget> LoginResultClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortLoginResultWidget* LoginResultWIdget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAccountNotFound> AccountNotFoundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAccountNotFound* AccountNotFoundWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortDisplayNameWidget> DisplayNameClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortDisplayNameWidget* DisplayNameWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMultiFactorAuthWidget> MultiFactorAuthWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMultiFactorAuthWidget* MultiFactorAuthWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortWebLoginWidget> WebLoginWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortHealthWarningBase> HealthWarningClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortHealthWarningBase* HealthWarningWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortEulaWidget> EulaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortEulaWidget* EulaWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BenchmarkDialogTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BenchmarkDialogMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAccountLinkingWindow> AccountLinkingWindowClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAccountLinkingWindow* AccountLinkingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAccountPinLinkingWindow> AccountPinLinkingWindowClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAccountPinLinkingWindow* AccountPinLinkingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackButtonRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMOTDWidget> MOTDClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMOTDWidget* MOTDWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortLoginUnavailable> LoginUnavailableClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetStack* LoginFlowStack;
    
public:
    UFortUIStateWidget_Login();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowBackBar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConsoleWidgetDisplayName();
    
    UFUNCTION(BlueprintCallable)
    void SafePopFlowStackNoReturn();
    
    UFUNCTION(BlueprintCallable)
    UWidget* SafePopFlowStack();
    
    UFUNCTION(BlueprintCallable)
    void PushWidgetOntoFlowStack(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void OnDisplayWebLogin(UWidget* WebWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnDisplayWebAccountCreation(UWidget* WebWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideTopBarOptions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlatformDisplayName() const;
    
};

