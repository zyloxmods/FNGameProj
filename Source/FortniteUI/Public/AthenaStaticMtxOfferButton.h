#pragma once
#include "CoreMinimal.h"
#include "AthenaMtxOfferButtonBase.h"
#include "AthenaStaticMtxOfferButton.generated.h"

class UCommonTextBlock;
class UHorizontalBox;
class USizeBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaStaticMtxOfferButton : public UAthenaMtxOfferButtonBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_BonusMtxAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_BonusPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HB_BonusMtxArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SB_BonusPercentArea;
    
public:
    UAthenaStaticMtxOfferButton();
};

