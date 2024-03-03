#pragma once
#include "CoreMinimal.h"
#include "PlayspaceComponent_PlayerSpawning.h"
#include "PapayaPlayerSpawningComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UPapayaPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning {
    GENERATED_BODY()
public:
    UPapayaPlayerSpawningComponent();
};

