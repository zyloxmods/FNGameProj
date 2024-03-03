#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Components/Widget.h"
#include "Templates/SubclassOf.h"
#include "CommonWidgetCarouselNavBar.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UCommonWidgetCarousel;

UCLASS(Blueprintable)
class COMMONUI_API UCommonWidgetCarouselNavBar : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButton> ButtonWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ButtonPadding;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetCarousel* LinkedCarousel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* ButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonButton*> Buttons;
    
public:
    UCommonWidgetCarouselNavBar();
    UFUNCTION(BlueprintCallable)
    void SetLinkedCarousel(UCommonWidgetCarousel* CommonCarousel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePageChanged(UCommonWidgetCarousel* CommonCarousel, int32 PageIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonClicked(UCommonButton* AssociatedButton, int32 ButtonIndex);
    
};

