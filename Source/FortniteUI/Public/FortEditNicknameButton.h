#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "FortEditNicknameButton.generated.h"

class UCommonRichTextBlock;
class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortEditNicknameButton : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor CharacterLimitWarningColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_EditNickname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_CharacterCounter;
    
public:
    UFortEditNicknameButton();
protected:
    UFUNCTION(BlueprintCallable)
    void SetKeyboardFocusOnEditableText();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleNicknameTextCommited(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleNicknameTextChanged(const FText& Text);
    
};

