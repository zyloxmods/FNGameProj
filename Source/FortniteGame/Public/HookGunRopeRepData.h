#pragma once
#include "CoreMinimal.h"
#include "HookGunRopeRepData.generated.h"

class AFortProjectileBase;
class AFortWeapon;

USTRUCT(BlueprintType)
struct FHookGunRopeRepData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortWeapon> Weapon;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortProjectileBase> Projectile;
    
    FORTNITEGAME_API FHookGunRopeRepData();
};

