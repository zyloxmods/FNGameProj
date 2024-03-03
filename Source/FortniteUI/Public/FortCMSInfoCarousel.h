#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortCMSInfoCarousel.generated.h"

class UCommonWidgetCarousel;
class UCommonWidgetCarouselNavBar;
class UEpicCMSSimpleMessage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCMSInfoCarousel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSubclassOf<UEpicCMSSimpleMessage>> MessageWidgetLayoutMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetCarousel* Carousel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetCarouselNavBar* CarouselNavBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CMSInfoId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoScrollInterval;
    
public:
    UFortCMSInfoCarousel();
protected:
    UFUNCTION(BlueprintCallable)
    void NavigatePageRight();
    
    UFUNCTION(BlueprintCallable)
    void NavigatePageLeft();
    
};

