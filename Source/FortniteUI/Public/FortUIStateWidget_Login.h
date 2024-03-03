#pragma once
#include "CoreMinimal.h"
#include "FortUIStateWidgetBase.h"
#include "FortUIStateWidget_Login.generated.h"

class UCommonButton;
class UCommonWidgetSwitcher;
class UFortLoginInteractions;
class UFortLoginStatus;
class UFortSafeZoneEditor;
class UFortSplashScreenWidget;
class UHealthWarningScreen;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortUIStateWidget_Login : public UFortUIStateWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ActionBar_Bottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_ScreenContents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSafeZoneEditor* Editor_SafeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLoginStatus* Status_LoginInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSplashScreenWidget* Splash_Screen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLoginInteractions* Login_Interactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthWarningScreen* HealthWarningScreen_HealthInfo;
    
public:
    UFortUIStateWidget_Login();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConsoleWidgetDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlatformDisplayName() const;
    
};

