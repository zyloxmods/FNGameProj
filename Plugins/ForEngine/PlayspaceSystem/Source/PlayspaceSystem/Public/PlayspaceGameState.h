#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "Templates/SubclassOf.h"
#include "PlayspaceGameState.generated.h"

class APlayspace;
class UPlayspaceGameStateComponent_PlayerSpawningManager;
class UPlayspaceManagerComponent;

UCLASS(Blueprintable)
class PLAYSPACESYSTEM_API APlayspaceGameState : public AGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayspace> RootPlayspaceClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePlayspaceSystem;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePlayerSpawningComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayspaceManagerComponent* PlayspaceManagerComponentCached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayspaceGameStateComponent_PlayerSpawningManager* PlayerSpawningManagerCached;
    
public:
    APlayspaceGameState();
};

