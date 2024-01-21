#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "AthenaInventoryEquipButtonBase.generated.h"

class UFortMultiSizeItemCard;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaInventoryEquipButtonBase : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMultiSizeItemCard* ItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* EmptyImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
public:
    UAthenaInventoryEquipButtonBase();
};

