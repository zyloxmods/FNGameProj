#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "AthenaSpatialStyleCard.generated.h"

class UFortCosmeticItemCard;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpatialStyleCard : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticItemCard* ItemCard_Style;
    
public:
    UAthenaSpatialStyleCard();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStyleImageSet(bool bUnlocked);
    
};

