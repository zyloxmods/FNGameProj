#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAILODSetting_FortWeaponRanged.h"
#include "FortAthenaAILODSettings.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAILODSettings_FortWeaponRanged.generated.h"

class AFortWeaponRanged;

UCLASS(Abstract, Blueprintable, MinimalAPI, Config=Game)
class UFortAthenaAILODSettings_FortWeaponRanged : public UObject, public IFortAthenaAILODSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AFortWeaponRanged>> SystemClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_FortWeaponRanged BelowLowerLODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_FortWeaponRanged LowerLODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_FortWeaponRanged AboveLowerLODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_FortWeaponRanged BelowNormalLODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_FortWeaponRanged NormalLODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_FortWeaponRanged AboveNormalLODSettings;
    
public:
    UFortAthenaAILODSettings_FortWeaponRanged();
    
    // Fix for true pure virtual functions not being implemented
};

