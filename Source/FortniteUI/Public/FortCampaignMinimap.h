#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "FortCampaignMinimap.generated.h"

UCLASS(Blueprintable)
class UFortCampaignMinimap : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DesiredSize;
    
public:
    UFortCampaignMinimap();
};

