#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAILODSetting_CharacterMovement.h"
#include "FortAthenaAILODSettings.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAILODSettings_CharacterMovement.generated.h"

class UFortMovementComp_Character;

UCLASS(Abstract, Blueprintable, MinimalAPI, Config=Game)
class UFortAthenaAILODSettings_CharacterMovement : public UObject, public IFortAthenaAILODSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortMovementComp_Character>> SystemClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_CharacterMovement BelowLowerLODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_CharacterMovement LowerLODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_CharacterMovement AboveLowerLODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_CharacterMovement BelowNormalLODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_CharacterMovement NormalLODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_CharacterMovement AboveNormalLODSettings;
    
public:
    UFortAthenaAILODSettings_CharacterMovement();
    
    // Fix for true pure virtual functions not being implemented
};

