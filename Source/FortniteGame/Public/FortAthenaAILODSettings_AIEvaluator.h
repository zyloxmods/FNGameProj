#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAILODSetting_AIEvaluator.h"
#include "FortAthenaAILODSettings.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAILODSettings_AIEvaluator.generated.h"

class UFortAthenaAIEvaluator;

UCLASS(Abstract, Blueprintable, MinimalAPI, Config=Game)
class UFortAthenaAILODSettings_AIEvaluator : public UObject, public IFortAthenaAILODSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortAthenaAIEvaluator>> SystemClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_AIEvaluator BelowLowerLODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_AIEvaluator LowerLODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_AIEvaluator AboveLowerLODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_AIEvaluator BelowNormalLODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_AIEvaluator NormalLODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAILODSetting_AIEvaluator AboveNormalLODSettings;
    
public:
    UFortAthenaAILODSettings_AIEvaluator();
    
    // Fix for true pure virtual functions not being implemented
};

