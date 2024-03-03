#pragma once
#include "CoreMinimal.h"
#include "FortCampaignLoadout.generated.h"

class UFortPersonalVehicleItem;

USTRUCT(BlueprintType)
struct FFortCampaignLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPersonalVehicleItem* PersonalVehicle;
    
    FORTNITEGAME_API FFortCampaignLoadout();
};

