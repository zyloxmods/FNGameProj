#pragma once
#include "CoreMinimal.h"
#include "EParentalControlsViewState.h"
#include "FortActivatablePanel.h"
#include "FortParentalControls.generated.h"

class UCommonActivatableWidgetSwitcher;
class UCommonButton;
class UFortParentalControls_AskToEnableControls;
class UFortParentalControls_AskToReEnable;
class UFortParentalControls_DisableParentalControls;
class UFortParentalControls_DisplaySettings;
class UFortParentalControls_EnterPin;
class UFortParentalControls_Renabling;
class UFortParentalControls_SetupEmail;
class UFortParentalControls_SetupPin;
class UFortParentalControls_VerifyEmail;
class UFortSettingDetailView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortParentalControls : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSettingDetailView* Details_Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CloseScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CloseMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetSwitcher* Switcher_SubViews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortParentalControls_EnterPin* SubView_EnterPin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortParentalControls_SetupPin* SubView_SetupPin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortParentalControls_AskToEnableControls* SubView_AskToEnableControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortParentalControls_VerifyEmail* SubView_VerifyEmail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortParentalControls_SetupEmail* SubView_SetupEmail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortParentalControls_DisplaySettings* SubView_DisplaySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortParentalControls_DisableParentalControls* SubView_DisableParentalControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortParentalControls_AskToReEnable* SubView_AskToReEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortParentalControls_Renabling* SubView_Renabling;
    
public:
    UFortParentalControls();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewSubScreenSet(EParentalControlsViewState ScreenState);
    
};

