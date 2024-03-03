#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortTransformResultsList.generated.h"

class UFortItem;
class UFortItemQuantityListBase;

UCLASS(Blueprintable, EditInlineNew)
class UFortTransformResultsList : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemQuantityListBase* ResultsList;
    
    UFortTransformResultsList();
    UFUNCTION(BlueprintCallable)
    void ShowRecycleResults(TArray<UFortItem*> SacrificeItems);
    
};

