#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCurieCableSignalManagerTickFunction.h"
#include "FortCurieCableSignalManager.generated.h"

UCLASS(Blueprintable, Config=Game)
class UFortCurieCableSignalManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCurieCableSignalManagerTickFunction PrimaryManagerTick;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SignalsProcessedPerTick;
    
public:
    UFortCurieCableSignalManager();
};

