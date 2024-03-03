#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Templates/SubclassOf.h"
#include "PlayspacePlayerController.generated.h"

class UPlayspaceControllerComponent_PlayerSpawning;

UCLASS(Blueprintable)
class PLAYSPACESYSTEM_API APlayspacePlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePlayerSpawningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPlayspaceControllerComponent_PlayerSpawning> ControllerSpawningComponent;
    
public:
    APlayspacePlayerController();
};

