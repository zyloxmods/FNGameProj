#pragma once
#include "CoreMinimal.h"
#include "PlayspaceGameStateComponent.h"
#include "PlayspaceSpawningInfo.h"
#include "PlayspaceGameStateComponent_PlayerSpawningManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYSPACESYSTEM_API UPlayspaceGameStateComponent_PlayerSpawningManager : public UPlayspaceGameStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPlayspaceSpawningInfo> SpawningUsersArray;
    
public:
    UPlayspaceGameStateComponent_PlayerSpawningManager();
};

