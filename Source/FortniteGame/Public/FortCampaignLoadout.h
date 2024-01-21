#pragma once
#include "CoreMinimal.h"
#include "FortCampaignLoadout.generated.h"

class UFortPersonalVehicleItem;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortCampaignLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPersonalVehicleItem* PersonalVehicle;
    
    FFortCampaignLoadout();
};

