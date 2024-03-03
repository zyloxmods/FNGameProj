#pragma once
#include "CoreMinimal.h"
#include "EHeistExitCraftState.h"
#include "HeistExitCraftData.generated.h"

class AFortAthenaExitCraft;
class AFortAthenaExitCraftSpawner;
class AFortPlayerPawnAthena;

USTRUCT(BlueprintType)
struct FHeistExitCraftData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaExitCraftSpawner* ExitCraftSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaExitCraft* SpawnedExitCraft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeistExitCraftState ExitCraftState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawnAthena*> DepartedPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDeparted;
    
    FORTNITEGAME_API FHeistExitCraftData();
};

