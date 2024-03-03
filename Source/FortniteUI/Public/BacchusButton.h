#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "BacchusHUDElement.h"
#include "BacchusButton.generated.h"

class UButton;
class UImage;
class UPaperSprite;
class URadialBacchusButtonBase;
class USizeBox;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UBacchusButton : public UBacchusHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* DefaultIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PressedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UnpressedColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonDisplayScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowRadialProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ListenedGamePlayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Background;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_ButtonSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_ImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadialBacchusButtonBase* RadialButton_ButtonCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button_InternalButton;
    
public:
    UBacchusButton();
protected:
    UFUNCTION(BlueprintCallable)
    void SetIconPressed(bool bIsPressed);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultIcon(UPaperSprite* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetButtonSprite(UPaperSprite* NewSprite);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetButtonSize(float NewButtonSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetButtonDisplayScale(float NewDisplayScale);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClicked();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CustomWidget);
    
};

