#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortHomebaseBannerColorItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortHomebaseBannerColorItem : public UFortAccountItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ColorRowName;
    
public:
    UFortHomebaseBannerColorItem();
};

