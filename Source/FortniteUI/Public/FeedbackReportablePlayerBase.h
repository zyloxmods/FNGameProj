#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FeedbackReportablePlayerBase.generated.h"

class UCommonTextBlock;
class UHorizontalBox;
class UReportablePlayerInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFeedbackReportablePlayerBase : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReportablePlayerInfo* PlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_SecondaryInfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_SecondayInfoArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_RoleText;
    
public:
    UFeedbackReportablePlayerBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectionState(bool bIsSelected, bool bAnimateOnSelect);
    
    
    // Fix for true pure virtual functions not being implemented
};

