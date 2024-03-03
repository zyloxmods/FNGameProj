#pragma once
#include "CoreMinimal.h"
#include "CameraSequence.generated.h"

class ALevelSequenceActor;

USTRUCT(BlueprintType)
struct FCameraSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ALevelSequenceActor> CameraSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayFromStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCinematiceMode;
    
    FORTNITEGAME_API FCameraSequence();
};

