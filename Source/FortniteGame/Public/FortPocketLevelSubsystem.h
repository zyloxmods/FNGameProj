#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "FortPocketLevelSubsystem.generated.h"

class UPocketLevelInstance;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPocketLevelSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPocketLevelInstance*> PocketInstances;
    
public:
    UFortPocketLevelSubsystem();
};

