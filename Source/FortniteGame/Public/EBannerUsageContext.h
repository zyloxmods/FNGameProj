#pragma once
#include "CoreMinimal.h"
#include "EBannerUsageContext.generated.h"

UENUM(BlueprintType)
enum class EBannerUsageContext : uint8 {
    Unknown,
    BannerIcon,
    PhysicalBanner,
    Spray,
};

