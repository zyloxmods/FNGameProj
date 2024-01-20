#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "EFortHelpContentLocation.h"
#include "Templates/SubclassOf.h"
#include "FortHelpAdditionalContent.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FFortHelpAdditionalContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortHelpContentLocation ContentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowAdditionalImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ImageToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowAdditionalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetToDisplay;
    
    FORTNITEGAME_API FFortHelpAdditionalContent();
};

