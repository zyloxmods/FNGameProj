#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HomebaseBannerColor.h"
#include "FortHomebaseBannerColorMap.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortHomebaseBannerColorMap : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHomebaseBannerColor> ColorMap;
    
public:
    UFortHomebaseBannerColorMap();
};

