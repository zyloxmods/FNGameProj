#pragma once
#include "CoreMinimal.h"
#include "CommonListView.h"
#include "AthenaAccoladeListWidget.generated.h"

UCLASS(Blueprintable)
class UAthenaAccoladeListWidget : public UCommonListView {
    GENERATED_BODY()
public:
    UAthenaAccoladeListWidget();
    UFUNCTION(BlueprintCallable)
    void PopulateWidget();
    
};

