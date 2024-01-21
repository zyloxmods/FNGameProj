#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortHomebaseBannerIconItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortHomebaseBannerIconItem : public UFortAccountItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName BannerRowName;
    
public:
    UFortHomebaseBannerIconItem();
};

