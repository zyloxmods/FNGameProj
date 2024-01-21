#pragma once
#include "CoreMinimal.h"
#include "FortVariantEditorWidgetBase.h"
#include "FortVariantTileSelector.generated.h"

class UCommonTextBlock;
class UCommonTileView;
class UVariantObject;

UCLASS(Blueprintable, EditInlineNew)
class UFortVariantTileSelector : public UFortVariantEditorWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTileView* Tile_VariantOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_VariantName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVariantObject* CurrentSelectedVariant;
    
public:
    UFortVariantTileSelector();
};

