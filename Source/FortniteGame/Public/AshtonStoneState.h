#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EAshtonStoneStateType.h"
#include "EAshtonStoneType.h"
#include "AshtonStoneState.generated.h"

USTRUCT(BlueprintType)
struct FAshtonStoneState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAshtonStoneType StoneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAshtonStoneStateType StoneState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    float SpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool bHasEverSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    int32 SpawnDataIdx;
    
    FORTNITEGAME_API FAshtonStoneState();
};

