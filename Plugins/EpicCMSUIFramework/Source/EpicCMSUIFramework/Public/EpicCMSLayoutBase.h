#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SlotDescription.h"
#include "Templates/SubclassOf.h"
#include "EpicCMSLayoutBase.generated.h"

class UEpicCMSTileCarousel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class EPICCMSUIFRAMEWORK_API UEpicCMSLayoutBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlotDescription> CarouselSlotDescriptions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEpicCMSTileCarousel> CarouselClass;
    
public:
    UEpicCMSLayoutBase();
};

