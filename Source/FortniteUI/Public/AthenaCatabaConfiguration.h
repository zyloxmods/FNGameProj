#pragma once
#include "CoreMinimal.h"
#include "AthenaCatabaConfiguration.generated.h"

class UAthenaCatabaCarousel;
class UAthenaCatabaSection;

USTRUCT(BlueprintType)
struct FAthenaCatabaConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LimitedTimeStorefrontNames;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaCatabaSection> SectionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaCatabaCarousel> CarouselWidgetClass;
    
public:
    FORTNITEUI_API FAthenaCatabaConfiguration();
};

