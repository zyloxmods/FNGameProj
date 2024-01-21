#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "Types/SlateEnums.h"
#include "FortMultiFactorAuthWidget.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMultiFactorAuthWidget : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PromptText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Continue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditText_MultiFactorCode;
    
public:
    UFortMultiFactorAuthWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
};

