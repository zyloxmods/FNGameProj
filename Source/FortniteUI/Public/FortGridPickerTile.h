#pragma once
#include "CoreMinimal.h"
#include "FortUserWidget.h"
#include "FortGridPickerTile.generated.h"

class UFortGridWidgetBase;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UFortGridPickerTile : public UFortUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGridWidgetBase* Owner;
    
public:
    UFortGridPickerTile();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(UObject* InData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClicked();
    
    UFUNCTION(BlueprintCallable)
    void ForwardClicked();
    
};

