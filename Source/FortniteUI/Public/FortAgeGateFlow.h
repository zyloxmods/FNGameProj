#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "FortAgeGateFlow.generated.h"

class UComboBoxString;
class UCommonButton;
class UCommonRichTextBlock;
class UCommonTextBlock;
class UCommonWidgetSwitcher;
class UEditableText;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAgeGateFlow : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_AgeGateScreens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Content_AgeEntryScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Content_GuardianEmailEntryScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Content_GuardianConsentPendingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* ComboBox_Month;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* ComboBox_Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* ComboBox_Year;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_AgeEntryContinue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_AgeEntryPrivacyPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_GuardianEmailEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_InvalidEmail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_GuardianEmailEntryContinue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_GuardianEmailEntryPrivacyPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_GuardianEmailReEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_TimerWarningEmailEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_TimerWarningConsentPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_EmailEntryChallengeError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_AgeEntryChallengeError;
    
public:
    UFortAgeGateFlow();
private:
    UFUNCTION(BlueprintCallable)
    void HandleGuardianEmailCommitted(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitInfo);
    
    UFUNCTION(BlueprintCallable)
    void HandleGuardianEmailChanged(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void HandleDateOfBirthYearChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void HandleDateOfBirthMonthChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void HandleDateOfBirthDayChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
};

