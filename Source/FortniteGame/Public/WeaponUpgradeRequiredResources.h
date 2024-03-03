#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFortWeaponUpgradeDirection.h"
#include "WeaponUpgradeRequiredResources.generated.h"

UCLASS(Blueprintable)
class UWeaponUpgradeRequiredResources : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredWood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredMetal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredBrick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortWeaponUpgradeDirection Direction;
    
    UWeaponUpgradeRequiredResources();
};

