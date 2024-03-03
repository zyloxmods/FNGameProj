#pragma once
#include "CoreMinimal.h"
#include "FortVariantEditorWidgetBase.h"
#include "FortVariantSelector.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UCommonTextBlock;
class UDynamicEntryBox;
class UVariantObject;

UCLASS(Blueprintable, EditInlineNew)
class UFortVariantSelector : public UFortVariantEditorWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_VariantOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_VariantName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVariantObject* CurrentSelectedVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* Tile_ButtonGroup;
    
public:
    UFortVariantSelector();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleItemSelected(UCommonButton* AssociatedButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemHovered(UCommonButton* AssociatedButton, int32 ButtonIndex);
    
};

