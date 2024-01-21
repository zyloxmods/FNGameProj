#pragma once
#include "CoreMinimal.h"
#include "FortPlayerAttributeSets.generated.h"

class UFortAdvancedMovementSet;
class UFortCharacterAttrSet;
class UFortConstructionSet;
class UFortControlResistanceSet;
class UFortDamageSet;
class UFortHomebaseSet;
class UFortMovementSet;
class UFortPlayerAttrSet;
class UFortRegenHealthSet;
class UFortWeaponAttrSet;

USTRUCT(BlueprintType)
struct FFortPlayerAttributeSets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortRegenHealthSet* HealthSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControlResistanceSet* ControlResistanceSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDamageSet* DamageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMovementSet* MovementSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAdvancedMovementSet* AdvancedMovementSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortConstructionSet* ConstructionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerAttrSet* PlayerAttrSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCharacterAttrSet* CharacterAttrSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWeaponAttrSet* WeaponAttrSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortHomebaseSet* HomebaseSet;
    
    FORTNITEGAME_API FFortPlayerAttributeSets();
};

