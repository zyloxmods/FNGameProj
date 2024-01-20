#pragma once
#include "CoreMinimal.h"
#include "EPlayerReportingStep.h"
#include "FortActivatablePanel.h"
#include "FeedbackReportPlayerBase.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UCommonListView;
class UCommonTextBlock;
class UEditableText;
class UMultiLineEditableTextBox;
class UObject;
class UPlayerReportReasonInfo;
class UReportablePlayerInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFeedbackReportPlayerBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UReportablePlayerInfo*> ReportablePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPlayerReportReasonInfo*> ReportReasons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReportablePlayerInfo* SelectedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerReportReasonInfo* SelectedReportReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptionalReportReasonLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPlayerEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Send;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* TabButtonGroup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_ReportablePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_ReportReasons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_ReasonField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMultiLineEditableTextBox* MultiLineEditableText_ReasonField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CharCount;
    
public:
    UFeedbackReportPlayerBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPopulateView(EPlayerReportingStep CurrentStep);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListViewSelectionMade(EPlayerReportingStep ReportingStep, const FText& SelectedText);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFeedbackSentCallback(bool Succeeded);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTabClicked(EPlayerReportingStep ClickedStep);
    
    UFUNCTION(BlueprintCallable)
    void HandleMessageChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void HandleBackAction();
    
    UFUNCTION(BlueprintCallable)
    void DynamicHandleReportReasonSelected(UObject* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void DynamicHandlePlayerSelected(UObject* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void CloseDialog();
    
};

