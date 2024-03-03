#pragma once
#include "CoreMinimal.h"
#include "FortSourceWorldAndOverlayWorld.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FFortSourceWorldAndOverlayWorld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> SourceWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> OverlayWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bServerOnly;
    
    FORTNITEGAME_API FFortSourceWorldAndOverlayWorld();
};

