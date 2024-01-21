#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FeedbackReportPlayerReasonBase.generated.h"

class UCommonTextBlock;
class UPlayerReportReasonInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFeedbackReportPlayerReasonBase : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerReportReasonInfo* ReportReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_Header;
    
public:
    UFeedbackReportPlayerReasonBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectionState(bool bIsSelected, bool bAnimateOnSelect);
    
    
    // Fix for true pure virtual functions not being implemented
};

