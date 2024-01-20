#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Types/SlateEnums.h"
#include "FortFriendSearchButton.generated.h"

class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortFriendSearchButton : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_AddFriend;
    
public:
    UFortFriendSearchButton();
protected:
    UFUNCTION(BlueprintCallable)
    void SetKeyboardFocusOnAddFriendText();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleAddFriendTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
};

