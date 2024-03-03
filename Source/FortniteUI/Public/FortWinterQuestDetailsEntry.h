#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortWinterQuestDetailsEntry.generated.h"

class UFortCosmeticItemCard;
class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWinterQuestDetailsEntry : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* FortItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticItemCard* ItemCard;
    
public:
    UFortWinterQuestDetailsEntry();
};

