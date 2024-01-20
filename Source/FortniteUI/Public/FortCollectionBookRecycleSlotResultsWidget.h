#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortItemCardSize.h"
#include "FortCollectionBookRecycleSlotResultsWidget.generated.h"

class UFortAccountItem;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookRecycleSlotResultsWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* RecycleResultsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemCardSize ItemCardSize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAccountItem* ItemToRecycle;
    
public:
    UFortCollectionBookRecycleSlotResultsWidget();
    UFUNCTION(BlueprintCallable)
    void SetCurrentItemToRecycle(UFortAccountItem* InItemToRecycle);
    
};

