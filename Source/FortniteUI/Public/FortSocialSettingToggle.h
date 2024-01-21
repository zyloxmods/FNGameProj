#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortSocialSettingToggle.generated.h"

class UCommonButton;
class UCommonRotator;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSocialSettingToggle : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRotator* Rotator_Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Right;
    
public:
    UFortSocialSettingToggle();
private:
    UFUNCTION(BlueprintCallable)
    void HandleRotated(int32 SelectedIndex);
    
};

