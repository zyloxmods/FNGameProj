#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "EnableMultiFactorModal.generated.h"

class UCommonButton;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UEnableMultiFactorModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasEnableMFABeenClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldShowConsoleVersion;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_EnableMFA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_RemindLater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_OptOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ConsoleMFAEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* CT_MFA_Description;
    
public:
    UEnableMultiFactorModal();
    UFUNCTION(BlueprintCallable)
    bool QueueModal(bool bAllowPermanentOptOut, bool bTournamentQueue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetScreenConfiguration(bool bIsConsole);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetExitButtonText(const FText& NewButtonText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConsoleDisplayURLProvided(const FText& UniquePlayerURLText);
    
    UFUNCTION(BlueprintCallable)
    void AnimationsComplete();
    
};

