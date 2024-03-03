#pragma once
#include "CoreMinimal.h"
#include "AthenaMtxOfferButtonBase.h"
#include "AthenaDynamicMtxOfferButton.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaDynamicMtxOfferButton : public UAthenaMtxOfferButtonBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DynamicMtxAmount;
    
public:
    UAthenaDynamicMtxOfferButton();
};

