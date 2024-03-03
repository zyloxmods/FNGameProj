#pragma once
#include "CoreMinimal.h"
#include "FortWorldItemTooltip.h"
#include "FortWeaponTooltip.generated.h"

class UFortWorldItem;

UCLASS(Blueprintable)
class UFortWeaponTooltip : public UFortWorldItemTooltip {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItem* CachedWeapon;
    
public:
    UFortWeaponTooltip();
};

