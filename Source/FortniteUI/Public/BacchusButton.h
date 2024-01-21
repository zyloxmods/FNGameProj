#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "BacchusHUDElement.h"
#include "BacchusButton.generated.h"

class UButton;
class UPaperSprite;

UCLASS(Blueprintable, EditInlineNew)
class UBacchusButton : public UBacchusHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonDisplayScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonSizeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonDisplayScaleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowRadialProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ListenedGamePlayTag;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* InternalButton;
    
    UBacchusButton();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetButtonSprite(UPaperSprite* NewSprite);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetButtonSize(float NewButtonSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetButtonDisplayScale(float NewDisplayScale);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClicked();
    
};

