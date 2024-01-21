#pragma once
#include "CoreMinimal.h"
#include "FortGameModePvE.h"
#include "FortGameModeKeep.generated.h"

class UFortKeepItemManager;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFortGameModeKeep : public AFortGameModePvE {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortKeepItemManager* KeepItemManager;
    
public:
    AFortGameModeKeep();
};

