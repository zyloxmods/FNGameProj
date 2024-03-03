#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortMainMenu.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMainMenu : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultHelpText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CountDownTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_MobileBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonUserWidget* LeaveButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* ContextualHelpText;
    
public:
    UFortMainMenu();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenSettings(FName TabNameID, const FString& SettingToSelect);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UUserWidget> GetOutpostPermissionsWidgetClass();
    
};

