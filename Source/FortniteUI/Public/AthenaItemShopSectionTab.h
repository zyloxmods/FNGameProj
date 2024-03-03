#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "AthenaItemShopSectionTab.generated.h"

class UCommonTextBlock;
class UFortBangWrapper_NUI;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopSectionTab : public UCommonButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TabName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBangWrapper_NUI* Bang_Wrapper;
    
    UAthenaItemShopSectionTab();
};

