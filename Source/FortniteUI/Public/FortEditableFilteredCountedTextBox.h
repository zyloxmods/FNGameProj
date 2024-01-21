#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Blueprint/UserWidget.h"
#include "FortEditableFilteredCountedTextBox.generated.h"

class UCommonTextBlock;
class UEditableTextBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortEditableFilteredCountedTextBox : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EntryCharLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SuggestionText;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* EditText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CharCount;
    
    UFortEditableFilteredCountedTextBox();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDirtyTextAttempted(bool bIsBadText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommittMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleTextChanged(const FText& Text);
    
};

