#pragma once
#include "CoreMinimal.h"
#include "PlayspaceComponent.h"
#include "PlayspaceComponent_PlayerSpawning.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYSPACESYSTEM_API UPlayspaceComponent_PlayerSpawning : public UPlayspaceComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQueueUserForSpawnWhenAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDelayMax;
    
public:
    UPlayspaceComponent_PlayerSpawning();
};

