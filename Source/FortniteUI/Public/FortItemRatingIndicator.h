#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortMultiSizeBrush.h"
#include "EFortBuffState.h"
#include "FortItemRatingIndicator.generated.h"

class IFortItemViewContextInterface;
class UFortItemViewContextInterface;
class UFortItem;

UCLASS(Blueprintable, EditInlineNew)
class UFortItemRatingIndicator : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToRepresent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToCompareWith;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMultiSizeBrush RatingTypeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RatingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortBuffState ComparisonResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldAppearEnchanted;
    
public:
    UFortItemRatingIndicator();
    UFUNCTION(BlueprintCallable)
    void SetItemViewContext(TScriptInterface<IFortItemViewContextInterface> ItemViewContext);
    
    UFUNCTION(BlueprintCallable)
    void SetItemToRepresent(const UFortItem* NewItemToRepresent);
    
    UFUNCTION(BlueprintCallable)
    void SetItemToCompareWith(const UFortItem* NewItemToCompareWith);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleViewModelChanged();
    
};

