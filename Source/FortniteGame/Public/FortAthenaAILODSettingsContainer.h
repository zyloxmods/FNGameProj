#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAILODSettingsContainer.generated.h"

class IFortAthenaAILODSettings;
class UFortAthenaAILODSettings;
class UFortAIDirectorLODAIConfig;
class UFortAthenaAILODSettings_AIEvaluator;
class UFortAthenaAILODSettings_CharacterMovement;
class UFortAthenaAILODSettings_FortWeaponRanged;

UCLASS(Abstract, Blueprintable, MinimalAPI, Config=Game)
class UFortAthenaAILODSettingsContainer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, TScriptInterface<IFortAthenaAILODSettings>> ClassToSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortAthenaAILODSettings_AIEvaluator>> LODSettings_AIEvaluators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortAthenaAILODSettings_CharacterMovement>> LODSettings_CharacterMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortAthenaAILODSettings_FortWeaponRanged>> LODSettings_FortWeaponRanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAIDirectorLODAIConfig> FortAIDirectorLODConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAIDirectorLODAIConfig* FortAIDirectorObjectLODConfig;
    
public:
    UFortAthenaAILODSettingsContainer();
};

