#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortLoginResultWidget.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UCommonTextStyle;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLoginResultWidget : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Continue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Quit;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> ErrorStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> NoErrorStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Description;
    
public:
    UFortLoginResultWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetForceQuitButtons(bool bForceQuit);
    
};

