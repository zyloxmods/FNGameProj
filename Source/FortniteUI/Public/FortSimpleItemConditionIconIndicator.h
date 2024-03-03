#pragma once
#include "CoreMinimal.h"
#include "FortMultiSizeImage.h"
#include "FortSimpleItemConditionIconIndicator.generated.h"

class UFortItem;

UCLASS(Abstract, Blueprintable)
class UFortSimpleItemConditionIconIndicator : public UFortMultiSizeImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCollapseWhenConditionIsFalse;
    
    UFortSimpleItemConditionIconIndicator();
    UFUNCTION(BlueprintCallable)
    void ShouldCollapseWhenConditionIsFalse(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetItemToRepresent(UFortItem* ItemToRepresent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetItemToRepresent() const;
    
};

