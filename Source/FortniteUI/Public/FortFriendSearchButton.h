#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Types/SlateEnums.h"
#include "FortFriendSearchButton.generated.h"

class UCommonRichTextBlock;
class UCommonWidgetSwitcher;
class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortFriendSearchButton : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_AddFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_SocialBanTimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ClearQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SubmitQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_SocialBan;
    
public:
    UFortFriendSearchButton();
protected:
    UFUNCTION(BlueprintCallable)
    void SetKeyboardFocusOnAddFriendText();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleAddFriendTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleAddFriendTextChanged(const FText& Text);
    
};

