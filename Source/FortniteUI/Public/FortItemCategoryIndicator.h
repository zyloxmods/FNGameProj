#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortItemCategoryOrdinal.h"
#include "FortIconWithLabel.h"
#include "FortItemCategoryIndicator.generated.h"

class UFortItem;

UCLASS(Blueprintable)
class UFortItemCategoryIndicator : public UFortIconWithLabel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToRepresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemCategoryOrdinal OrdinalOfCategoryToRepresent;
    
    UFortItemCategoryIndicator();
    UFUNCTION(BlueprintCallable)
    void SetOrdinalOfCategoryToRepresent(const EFortItemCategoryOrdinal ItemCategoryOrdinal);
    
    UFUNCTION(BlueprintCallable)
    void SetLabelColorOverride(const FLinearColor InLabelColorOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetItemToRepresent(const UFortItem* NewItemToRepresent);
    
    UFUNCTION(BlueprintCallable)
    void ClearLabelColorOverride();
    
};

