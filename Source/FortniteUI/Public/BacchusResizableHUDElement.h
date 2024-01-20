#pragma once
#include "CoreMinimal.h"
#include "BacchusHUDElement.h"
#include "BacchusResizableHUDElement.generated.h"

class UScaleBox;

UCLASS(Blueprintable, EditInlineNew)
class UBacchusResizableHUDElement : public UBacchusHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SizePropertyDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBox_Resize;
    
public:
    UBacchusResizableHUDElement();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSizeChanged();
    
};

