#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EFortMovementStyle.h"
#include "ReplayDataMoveSnapshot.generated.h"

USTRUCT(BlueprintType)
struct FReplayDataMoveSnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMovementStyle MovementStyle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 WorldTime;
    
    FORTNITEGAME_API FReplayDataMoveSnapshot();
};

