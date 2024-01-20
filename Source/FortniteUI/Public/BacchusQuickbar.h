#pragma once
#include "CoreMinimal.h"
#include "BacchusHUDElement.h"
#include "BacchusQuickbar.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBacchusQuickbar : public UBacchusHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SlotSizeName;
    
    UBacchusQuickbar();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Refresh();
    
};

