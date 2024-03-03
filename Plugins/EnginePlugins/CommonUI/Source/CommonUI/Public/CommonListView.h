#pragma once
#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "CommonListView.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UCommonListView : public UListView {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetEntrySpacing(float InEntrySpacing);
    
};

