#pragma once
#include "CoreMinimal.h"
#include "AthenaMtxOfferButtonBase.h"
#include "AthenaStarterKitOfferButton.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaStarterKitOfferButton : public UAthenaMtxOfferButtonBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_OfferContent;
    
public:
    UAthenaStarterKitOfferButton();
};

