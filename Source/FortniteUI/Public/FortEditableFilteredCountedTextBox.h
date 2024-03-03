#pragma once
#include "CoreMinimal.h"
#include "Widgets/Text/ISlateEditableTextWidget.h"
#include "Types/SlateEnums.h"
#include "Blueprint/UserWidget.h"
#include "FortEditableFilteredCountedTextBox.generated.h"

class UAsyncTaskQueue;
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
    EVirtualKeyboardTrigger VirtualKeyboardTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EnforcedEntryCharLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SuggestionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplaceUserTextWithSanitizedString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSanitizedStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseToxicityServiceSanitization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultSanitizationErrorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AdditionalValidationErrorText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UAsyncTaskQueue*> PendingSanitizationTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* EditText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CharCount;
    
public:
    UFortEditableFilteredCountedTextBox();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEntryCharLimit(int32 InCharLimit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDirtyTextAttempted(bool bIsBadText, bool bAdditionalValidationFailed);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleTextChanged(const FText& Text);
    
};

