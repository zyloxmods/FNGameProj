#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortTwitchLogin.generated.h"

class UFortTwitchLoginModalWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortTwitchLogin : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortTwitchLoginModalWidget> TwitchLoginModalWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortTwitchLoginModalWidget* ActiveLoginModal;
    
public:
    UFortTwitchLogin();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowLoginError(const FText& ErrorTitle, const FText& ErrorMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoginStatusChanged(bool bLoggedIn, const FString& AccountName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoginFlowModalDismissed(UFortTwitchLoginModalWidget* Modal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoginFlowModalCreated(UFortTwitchLoginModalWidget* Modal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLinkedTwitchAccountChanged(const FString& AccountName);
    
private:
    UFUNCTION(BlueprintCallable)
    void Logout();
    
    UFUNCTION(BlueprintCallable)
    void Login();
    
    UFUNCTION(BlueprintCallable)
    bool IsLoggedIn();
    
    UFUNCTION(BlueprintCallable)
    FString GetLinkedTwitchAccountName();
    
    UFUNCTION(BlueprintCallable)
    FString GetAccountName();
    
    UFUNCTION(BlueprintCallable)
    void CancelLoginFlow();
    
};

