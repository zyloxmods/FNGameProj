#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "FortMiniMapIndicator.h"
#include "FortSimpleMiniMapIndicator.generated.h"

UCLASS(Blueprintable)
class UFortSimpleMiniMapIndicator : public UFortMiniMapIndicator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush NormalBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush AboveBelowBrush;
    
public:
    UFortSimpleMiniMapIndicator();
};

