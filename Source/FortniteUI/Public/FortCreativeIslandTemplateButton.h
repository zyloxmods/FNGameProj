#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "AthenaCreativeItemTileButton.h"
#include "FortCreativeIslandTemplateButton.generated.h"

class UFortCreativeIslandLink;
class UFortCreativeRealEstatePlotItemDefinition;
class UFortLazyImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeIslandTemplateButton : public UAthenaCreativeItemTileButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FeaturedIslandTemplateImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* TemplateImage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush DefaultFeaturedTemplateImage;
    
public:
    UFortCreativeIslandTemplateButton();
    UFUNCTION(BlueprintCallable)
    UFortCreativeRealEstatePlotItemDefinition* GetPlotTemplateDefinition();
    
    UFUNCTION(BlueprintCallable)
    UFortCreativeIslandLink* GetIslandLink();
    
};

