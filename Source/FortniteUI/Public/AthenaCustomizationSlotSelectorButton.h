#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "EAthenaCustomizationCategory.h"
#include "AthenaCustomizationSlotSelectorButton.generated.h"

class UFortMultiSizeItemCard;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCustomizationSlotSelectorButton : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaCustomizationCategory CustomizationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubslotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMultiSizeItemCard* ItemWidget;
    
public:
    UAthenaCustomizationSlotSelectorButton();
    UFUNCTION(BlueprintCallable)
    void SetCustomizationType(EAthenaCustomizationCategory NewType, int32 InSubslotIndex);
    
};

