#pragma once
#include "CoreMinimal.h"
#include "CommonTextBlock.h"
#include "FortItemDisplayNameText.generated.h"

class UFortItem;

UCLASS(Blueprintable)
class UFortItemDisplayNameText : public UCommonTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToRepresent;
    
    UFortItemDisplayNameText();
    UFUNCTION(BlueprintCallable)
    void SetItemToRepresent(UFortItem* NewItemToRepresent);
    
};

