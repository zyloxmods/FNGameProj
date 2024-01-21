#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EFortCheatMissionGenType.h"
#include "FortMissionGenerationManager.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortMissionGenerationManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortCheatMissionGenType CheatMissionGenType;
    
    AFortMissionGenerationManager();
};

