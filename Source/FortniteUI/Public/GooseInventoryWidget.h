#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "LTMWidgetBase.h"
#include "GooseInventoryWidget.generated.h"

class UFortWorldItemDefinition;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UGooseInventoryWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WidgetEnabled;
    
public:
    UGooseInventoryWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWidget(UTexture2D* IconTexture, const UFortWorldItemDefinition* ItemDef);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWidget();
    
};

