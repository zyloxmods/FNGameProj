#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "FortMiniMapIndicator.h"
#include "FortVolumeMiniMapIndicator.generated.h"

UCLASS(Blueprintable)
class UFortVolumeMiniMapIndicator : public UFortMiniMapIndicator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush PerimeterBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush OnRadarBrush;
    
public:
    UFortVolumeMiniMapIndicator();
};

