#pragma once
#include "CoreMinimal.h"
#include "FortShowdownDivisionEventView.h"
#include "FortDivisionPayoutInfo.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UDataTable;
class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDivisionPayoutInfo : public UFortShowdownDivisionEventView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBoxes_DivisionRanksButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Payouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_League;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DivsionRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PayoutDisplayInfo;
    
public:
    UFortDivisionPayoutInfo();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDivisionChanged(int32 NewDivision);
    
};

