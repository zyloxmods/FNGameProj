#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "FortQuestMapDataEntry.h"
#include "FortEventQuestMapDataEntry.generated.h"

class UMaterialInterface;
class USoundBase;

USTRUCT(BlueprintType)
struct FFortEventQuestMapDataEntry : public FFortQuestMapDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventCalloutTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventCalloutDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* EventCalloutImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* EventCalloutOverrideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor EventArrowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor EventArrowShadowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventCalloutQuestFlag;
    
    FORTNITEGAME_API FFortEventQuestMapDataEntry();
};

